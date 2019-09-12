#include <stdio.h>

int main(int argn, char* argv[]){
  printf("there are %d command line arguments\n",argn);
  for(int i = 0; i < argn; ++i){
    printf("%dArgument %d is %s\n",i*i,i,argv[i]);
  }
  printf("hello %dworld\n",7);
}
