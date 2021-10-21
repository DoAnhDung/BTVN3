#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x; //start time
	int y; //end time
	int a = 30000;
	int b; //fee
	
	cout << " We open from 8am to 24pm everyday" << endl;
	cout << " Enter the time you start: ";
	cin >> x;
	cout << " Enter the time you finish at";
	cin >> y;

	int z = y - x;

	if (x < 8&&y>24) {
		cout << " Error";
	}
	else if (y <= 17) {
		if (z > 3) {
			b = ((a - a * 30 / 100) * (z - 3) + 3 * a) - (((a - a * 30 / 100) * (z - 3) + 3 * a) * 10 / 100);
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a)-(z*a * 10 / 100);
			cout << " You have to paid " << b << " dong " << endl;
		}

	}
	else if (y > 17) {
		if (z > 3) {
			b = (a - a * 30 / 100) * (z - 3) + 3 * a;
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a);
			cout << " You have to paid " << b << " dong " << endl;
		}

	}


	return 0;
}