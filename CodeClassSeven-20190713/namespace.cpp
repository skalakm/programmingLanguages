#include <iostream>
using namespace std;

// first name space
namespace first_space{
      void func(){
      	cout << "This is being printed from func() in the first namespace" << endl;
      }
}

// second name space
namespace second_space{
       void func(){
      	cout << "This is being printed from func() in the second namespace" << endl;
       }
}

int main ()
{
   using namespace first_space; 
   // Calls function from first name space.
   first_space::func();

   // Calls function from second name space.
   second_space::func();

   return 0;
}
