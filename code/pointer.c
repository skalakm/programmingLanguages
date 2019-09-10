#include<stdio.h>
#include<stdlib.h>

int main( int argc, char* argv[]){

  int* x;
  int* y;
  char* z;
  int val =8;
  int asdf =4;
  printf("The address of val is %p\n", &val);
  
  printf("The address of asdf is %p\n", &asdf);

  printf("The val of val is %d\n",val);
  x = &val;
  
  printf("The val of x is %d\n",*x);

  val = 3;
  
  printf("The val of x is %d\n",*x);

  int* heap = malloc(sizeof(int));
  printf("The pointer heap is %p", heap);
  free(heap);
}
	
