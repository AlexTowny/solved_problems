//examples:
// 123
// second
// --------
// 213
// first
// --------
// 113
// equal
// --------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    int f2 = a / 10 % 10;
	int f1 = a / 100;

	cout << ((f1>f2)?("first"):((f1==f2)?("equal"):("second")));

    return 0;
}
