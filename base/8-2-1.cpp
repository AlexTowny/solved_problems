#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int n;

int calc(int b1, int b2, int n0) {
	if (n0 == n)
		return b2;
	else if (n == 1)
		return b1;
	
	
	if (n0 > 1) {
		int bn = abs(b1) - 6 * b2;
		calc(b2, bn, ++n0);
	}
	else
		calc(b1, b2, ++n0);
}

int main() {
	cin >> n;
	cout << calc(-10, 2, 0);
	return 0;
}
