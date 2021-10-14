//examples:
// 70 70
// no
// -------
// 35 0
// edge
// -------
// 35 1
// yes
// -------
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
string valid(int x, int y) {
    if (x > 0 && x < 70 && x > y && y > 0)
        return "yes";
    else if ((y >= 0 && y <= 70 && x >= 0 && x <= 70) &&
             (x == y || x ==0 || y == 0))
        return "edge";
    else
        return "no";
}
int main() {
    
    int x,y;
    cin >> x >> y;
    cout << valid(x,y);
    return 0;
}
