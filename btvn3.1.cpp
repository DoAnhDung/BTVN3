#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	cout << " Enter two number randomly";
	cin >> x;
	cin >> y;
	
	if (x > y) {
		cout << x << " is the maximum number" << endl;
		cout << y << " is the minimum number" << endl;
	}
	else if (x < y) {
		cout << y << " is the maximum number" << endl;
		cout << x << " is the minimum number" << endl;
	}
	else {
		cout << " Error" << endl;
	}
	return 0;
}