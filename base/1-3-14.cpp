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
    if (a / 10 % 10 > a / 100)
        cout << "second";
    else if (a / 10 % 10 < a / 100)
        cout << "first";
    else
        cout << "equal";
    return 0;
}
