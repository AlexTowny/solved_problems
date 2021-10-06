#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = acos(-1);

bool check_cross(double y1, double y2, double r){
	if (abs(floor(y2/r) - floor(y1/r))>0)
		return true;
	return false;
}

double calc_pi_buffon(int iteration, double r){
	double x1,y1,y2,angle,ans,m = 0;

	for (int i = 0; i< iteration; i++){
	x1 = rand()%2000;
	y1 = rand()%2000;
	angle = rand()%6283185/1e6;
	y2=sin(angle)*r+y1;

	if (check_cross(y1,y2,r))
		m++;
	}

	ans = pow((m/iteration),-1)*2;

	return ans;
}

int main() {
	double pi_arc_cos, pi_arc_sin, pi_arc_tan, pi_buffon;

	pi_arc_cos = acos(-1);
	pi_arc_sin = asin(1)*2;
	pi_arc_tan = atan(1)*4;
	pi_buffon = calc_pi_buffon(1e6,7.);

	cout << fixed << setprecision(9) << pi_arc_cos << endl <<
										pi_arc_sin << endl <<
										pi_arc_tan << endl<<
										pi_buffon << endl;
	return 0;
}
