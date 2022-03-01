#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

struct point3d{
	double x;
	double y;
	double z;
	point3d (double xo, double yo, double zo){
		x = xo;
		y = yo;
		z = zo;
	}
};
struct point2d{
	double x;
	double y;
	point2d (double xo, double yo){
		x = xo;
		y = yo;
	}
};
double distance(double x1,double y1,double z1,
				double x2,double y2,double z2){
	return sqrt(pow(x1-x2,2)+
				pow(y1-y2,2)+
				pow(z1-z2,2));
}

double distance(double x1,double y1,
				double x2,double y2){
	return distance(x1,y1,0,x2,y2,0);
}

double distance(point2d a,
				point2d b){
	return distance(a.x,a.y,b.x,b.y);
}

double distance(point3d a,
				point3d b){
	return distance(a.x,a.y,a.z,b.x,b.y,b.z);
}
int main() {
	return 0;
}
