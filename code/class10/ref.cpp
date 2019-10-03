#include<iostream>

using namespace std;

int main() {

	int i = 3;
	int &r = i;
	cout << "i=" << i << "r=" << " " << r << endl;
	cout <<"&r=" << &r << endl;
	cout <<"&i=" << &i;
	int j = 5;
	r=j;
//	&r = &j;

	int *x = &i;
	x=&j;
	const int &g = j;
	j=9;

}
