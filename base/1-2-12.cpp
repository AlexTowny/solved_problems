//examples:
// 0 0 0 2 3 0
// 3
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x1, x2, x3,
           y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt(pow(x1 - x2,2) + pow(y1 - y2, 2));
    double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double p = (a + b + c) / 2;
    double ans = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(6) << ans;
    return 0;
}
