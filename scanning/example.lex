// file: example.lex
// author: Tim Wahls
// date: 8/20/2007
// purpose: defining a JLex scanner for a simple calculator

// to gain access to the Symbol class
import java_cup.runtime.Symbol;
%%
%eofval{
  return new Symbol(sym.EOF);
%eofval}
%cup
DIGIT = [0-9]
WHITESPACE = [ \t\r\n]
NUM = {DIGIT}+("."{DIGIT}+)?
%%

";"           {return new Symbol(sym.SEMI);}
"+"           {return new Symbol(sym.ADDOP, "+");}
"-"           {return new Symbol(sym.ADDOP, "-");}
"*"           {return new Symbol(sym.MULOP, "*");}
"/"           {return new Symbol(sym.MULOP, "/");}
"("           {return new Symbol(sym.LPAR);}
")"           {return new Symbol(sym.RPAR);}
{NUM}         {return new Symbol(sym.NUM, new Double(yytext()));} 
{WHITESPACE}  { /* skip */ }
.             {System.err.println("Illegal character: "+yytext());}

