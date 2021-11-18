#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double pi = acos(-1);
const double eps = 1e-6;

string square_m(double r, double a){
	double square_area = a*a;
	double circle_area = r*r*pi;
	if (square_area > circle_area + eps)
		return "circle";
	else if (square_area + eps < circle_area)
		return "square";
	else
		return "equal";
}

int main() {
	double r_circle, square_a;
	cin >> r_circle >> square_a;
	cout << square_m(r_circle, square_a);
	return 0;
}
