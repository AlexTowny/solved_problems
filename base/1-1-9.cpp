//examples
// 5 -> 99.3
// 1e12 -> 999999999999000081317889726643961856.000000000000
// -1 -> 2.5

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double x, ans;

	cout << "Calculation |x^3 - x^2| - (7x/(x^3 - 15x))\n";
	cout << "Enter x value, please \n";

	cin >> x;

	ans = abs(pow(x,3) - pow(x,2)) - (7*x)/(pow(x,3) - 15*x);

	cout << fixed << setprecision(12)  <<  ans;
	return 0;
}
