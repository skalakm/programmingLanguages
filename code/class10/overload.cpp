#include <iostream>
using namespace std;
 
class printData 
{
   public:
      void print() {
	cout << "Printing from default function" << endl;
      }
      void print(int i, int j) {
        cout << "Printing ints: " << i << " " << j << endl;
      }

      void print(double  f) {
        cout << "Printing double: " << f << endl;
      }

      void print(int a, double b) {
        cout << "Printing int and float: " << a << " " << b  << endl;
      }
};

int main(void)
{
   printData pd;
 
   pd.print();
   // Call print to print integers
   pd.print(5,6);
   // Call print to print double
   pd.print(100.45);
   // Call print to print integer and float
   pd.print(4, 8.9);
 
}

