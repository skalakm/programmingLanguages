import java_cup.runtime.Symbol;

/** Demonstrate the use of a Yylex lexical analyzer for the calculator.
 *  For this example to work correctly, you must write a sym.java file
 *  by hand, specifying integer constants for all the possible token values.
 */
class LexTest
{
    public static final int END_OF_FILE = 0;

    public static void main(String[] args) throws Exception
    {
        // create a lexical analyzer that reads from standard input
        Yylex lexicalAnalyzer = new Yylex(System.in);

        // read and print tokens until end of file is reached
        while (true) {
            java_cup.runtime.Symbol s = lexicalAnalyzer.next_token();
            if (s.sym == END_OF_FILE) {
                break;
            }
            System.out.print("token " + s.sym);
            if (s.value != null) {
                System.out.println(", value " + s.value.toString());
            } else {
                System.out.println();
            }
        }
    }
}