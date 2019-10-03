#include<iostream>
using namespace std;
int main(){

int x = 10;					
int &y = x;
x = 6;
y =10;
cout << x;
y++;
int z = 2;
&y = &z;
cout << x;
cout << &x;
cout << &y;
}

