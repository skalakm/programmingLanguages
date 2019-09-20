#define BLAH 9

#define add(x,y) (x+y)
#define funcOfFiveFour(func) func(BLAH,5)
#include<stdio.h>

int mult(a,b){
  return a*b;
}

int main(int argn, char* argv[]){

  int a = add(2,3) ;

  printf( "%d\n", a);



}

