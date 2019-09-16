#include<stdio.h>


int main(int argn, char* argv[]){
  int y[] = {23, 57, 83, 29};
  printf("y is %p\n", y);
  printf("*y is %d\n", *y);
  printf("y[0] is %d\n", y[0]);
    
  printf("&(*y) is %p\n", &(*y));
  int* x = &y[2];
  printf("x[0] is %d\n",x[0]);
  
  printf("x[-1] is %d\n",x[-1]);

  
  printf("x[-3] is %d\n",x[-3]);
  char* arg = (char*)x[-5];
  printf("arg is %s", arg);
}
