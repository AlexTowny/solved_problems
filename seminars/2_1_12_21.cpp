#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

int main() {
	double ans;
	double e;
	double i=1,a=1;
	double last;
	cin >> e;

	while(true){
		double el = (i+3)/a;
		i++;
		a*=i;
		if (abs(el-last) < e)
			break;
		ans += el;
		last = el;
	}
	cout << fixed << setprecision(6) << ans;
	return 0;
}
