#include <iostream>
#include <stdlib.h> // for rand()

using namespace std;

// References allow you to use "out" and "in-out" parameters in a more
// readable way. Under the covers, they are just pointers---but you
// don't need to dereference them.

void getXandY(/*out*/ double &x, /*out*/ double &y)
{
  x = 5.23;
  y = 7.1;
}

void incrementMandN(/*in-out*/ int &m, /*in-out*/ int &n)
{
  m = m + 1;
  n = n + 1;
}

class BigArray
{
public:
  static const int ARRAY_SIZE = 100000;
  double array[ARRAY_SIZE];
  BigArray() {
    for(int i=0; i<ARRAY_SIZE; i++){
      // generate a random double between 0 and 1
      // (code suggested by http://stackoverflow.com/questions/2704521/generate-random-double-numbers-in-c)
      double random_val = (double)rand() / RAND_MAX;
      array[i] = random_val;
    }
  }
  double getMax() {
    double max_val = 0.0;
    for(int i=0; i<ARRAY_SIZE; i++){
      if (max_val < array[i]) {
	max_val = array[i];
      }
    }
    return max_val;
  }
};

// return true if the largest element of a1 is larger than the largest
// element of a2
bool maxIsLarger(BigArray &a1, BigArray &a2)
{
  double a1_max = a1.getMax();
  double a2_max = a2.getMax();
  return a1_max > a2_max;
}

int main(int argn, char* argv[])
{
  double a, b;
  int p, q;
  
  // exercise: get values of x and y, using getXandY(),
  // and store the results in a and b
  getXandY(a, b);
  // print out the results
  cout << "a is " << a << ", b is " << b << endl;

  p = 5;
  q = 7;
  // exercise: increment p and q using a single call to incrementMandN()
  incrementMandN(p, q);
  // print out the results
  cout << "p is " << p << ", q is " << q << endl;

  BigArray bigArray1;
  BigArray bigArray2;
  double largestInEither;
  if (maxIsLarger(bigArray1, bigArray2)) {
    largestInEither = bigArray1.getMax();
  } else {
    largestInEither = bigArray2.getMax();
  }
  cout << "Largest element in either array is " << largestInEither << endl;
}
