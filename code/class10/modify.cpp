#include<iostream>
using namespace std;

void modify(int& x){
    x=10;

}

void dontModify( int x){
  x = 11;
}

void modify2( int* x){
  *x = 7;
}

void maxAndMin( int& x, int& y){

  if(x > y){
    return;
  }else{
    int z = x;
    x=y;
    y=z;
  }
}

void maxAndMinPointer( int* x, int* y){

  if(*x > *y){
    return;
  }else{
    int z = *x;
    *x=*y;
    *y=z;
  }
}



int main(){

  int *p = new int;
  int *q = new int;
  *q=5;
  *p = 2;
  maxAndMinPointer(p,q);
  cout << *p << " " << *q << endl;
  int v = 17;
  int w =12;
  
  maxAndMin(v,w);
  cout << v << " " << w << endl;

  
    int a = 5;
    cout << a << endl;
    modify(a);
    cout << a << endl;

    int * b = new int;
    *b=10;
    modify2(b);
    cout << *b << endl;

    int c = 6;
    dontModify(c);
    cout << c << endl;
}
    
