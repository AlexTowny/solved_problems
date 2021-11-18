#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double pi = acos(-1);
const double eps = 1e-6;
double arif(double a,double b){
	return (a + b)/2;
}

double geom(double a,double b){
	return sqrt(a*b);
}

int main() {
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << max(max(arif(a,b),geom(a,b)),max(arif(c,d),geom(c,d)));
	return 0;
}
