#include<stdio.h>

typedef int asdf;

struct TwoInts{
  int a;
  int b;
};

typedef struct TwoInts ShortTwoInts;


typedef struct TwoInts2{
  int a;
  int b;
} OtherTwoInts;
struct Top{
  int Blah1;
  struct {int a; int b;} Blah2;
  struct {int a; int b;} Blah3;
}

void doFunc(ShortTwoInts ti){
}

int main(int argn, char* args[]){
  asdf f = 2;

  f = f +4;
  struct TwoInts myTwoInts;

  
  
}
