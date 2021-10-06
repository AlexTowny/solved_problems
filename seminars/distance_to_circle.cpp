#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = acos(-1);

int main() {
	double ans, r, x1, x2, y1, y2;
	cout << "Enter x,y of circle center:\n";
	cin >> x1 >> y1 ;
	cout << "Enter radius of circle:\n";
	cin >> r;
	cout << "Enter x,y of dot:\n";
	cin >> x2 >> y2;

	ans = abs(r - sqrt(pow(x1-x2,2)+pow(y1-y2,2)));

	cout << fixed << setprecision(3) << "Distance: " << ans;
	return 0;
}
