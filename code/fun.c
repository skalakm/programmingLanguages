#include<stdio.h>
#include<stdlib.h>

void func( int* x){
  *x = 5;
}

void increment( int* x){
  printf("x input to increment was %p\n", x);
  
  printf("x input to increment was %d\n", *x);
  *x = *x+1;
}

void swap( int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int* makeArray(int x){
  int* bleh = malloc(x*sizeof(int));
  return bleh;
}

int main(int argn, char* argv[]){

  int a = 10;
  func(&a);
  printf("a is now %d\n",a);
  increment(&a);
  
  printf("a is now %d\n",a);
  int b = 12;

  
  printf("a is %d and b is %d\n", a,b);
  swap(&a,&b);
  printf("a is %d and b is %d\n", a,b);
  swap(&a,&b);
  
  printf("a is %d and b is %d\n", a,b);

  int* theArray = makeArray(7);
  for(int i= 0; i < 7; ++i){
    printf("%d, %d\n", i, theArray[i]);
  }
}


  
