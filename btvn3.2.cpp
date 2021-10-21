#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a;
	float b;
	
	cout << " Find x : ax + b = 0 by enter a,b" << endl;
	cout << " Enter a";
	cin >> a;
	cout << " Enter b";
	cin >> b;
	float x = -b / a;
	cout << fixed << setprecision(20) << x;

	return 0;
}