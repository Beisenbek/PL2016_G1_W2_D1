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

	cin >> a >> b >> c >> h;

	double p = (a+b+c)/2;	
	double s = sqrt(p*(p-a)*(p-b)*(p-c));

	cout << s*h/3;

	return 0;
}
