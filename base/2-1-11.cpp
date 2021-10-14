//examples:
// 125
// 25
// -------
// 126
// 127
// -------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int func(int arg) {
    
    if (arg % 5 == 0)
        return arg / 5;
    else
        return arg + 1;
}    
int main() {
    
    int inp;
    cin >> inp;
    cout << func(inp);
    return 0;
}
