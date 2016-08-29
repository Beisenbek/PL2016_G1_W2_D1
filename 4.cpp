/*
You are given 4 integer numbers A, B, C and H, 
the sides of base of pyramid and the height. 
Find the volume of the pyramid using the following formula.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b,c,h;
	double s,v,p;

	cin >> a >> b >> c >> h;

	p = (a+b+c)/2;	
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	v = s*h/3;

	cout << v;

	return 0;
}
