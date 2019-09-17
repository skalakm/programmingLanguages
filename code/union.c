#include <stdio.h>
#include <string.h>

union Data{
  int i;
  float f;
  char str[20];
};

int main(){
  union Data data;

  
  strcpy( data.str, "C Programming");
  printf("data.i : %i\n",data.i);
  printf("data.f : %f\n", data.f);
  printf("data.str : %s\n", data.str);
  
  data.i=0xFFFFFFFF;
  
  printf("data.i : %i\n",data.i);
  printf("data.f : %f\n", data.f);
  printf("data.str : %s\n", data.str);
  data.f = 220.5;

  
  printf("data.i : %i\n",data.i);
  printf("data.f : %f\n", data.f);
  printf("data.str : %s\n", data.str);
  return 0;
}
