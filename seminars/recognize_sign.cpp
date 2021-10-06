#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double x;

	cin >> x;
	cout << ((x > 0)?("+"):((x==0)?("0"):("-")));
	return 0;
}
