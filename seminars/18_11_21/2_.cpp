#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double pi = acos(-1);
const double eps = 1e-6;
bool sqrt_valid(double &a){
	if(a-eps>0){
		a = sqrt(a);
		return true;
	}
	else
		return false;
}

int main() {
	double a;
	cin >> a;
	cout << sqrt_valid(a) << '\n';
	cout << a;
	return 0;
}
