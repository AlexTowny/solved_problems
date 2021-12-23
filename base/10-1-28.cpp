#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double eps = 1e-6;

struct point2d{
	double x = 0;
	double y = 0;
};

struct line2d{
	point2d a;
	point2d b;
	double length(){
		return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
	}
};

int main() {

	int n;

	double min_p;
	bool flag = false;

	cin >> n;

	point2d* points = new point2d[n];
	point2d ans[3];
	for(int i = 0; i<n; i++)
		cin >> points[i].x >>  points[i].y;
	if(n<3){
		cout << "Triangle doesn't exist.";
		return 0;
	}
	for(int i = 0; i<n; i++)
		for(int j = i+1; j<n; j++)
			for(int k = j+1; k<n; k++){
				if(points[i] == points[j] ||
				   points[j] == points[k] ||
				   points[k] == points[i])
					continue;
				line2d a;
				a.a = points[i];
				a.b = points[j];
				line2d b;
				b.a = points[j];
				b.b = points[k];
				line2d c;
				c.a = points[k];
				c.b = points[i];
				double loc_p = a.length()+b.length()+c.length();
				if(!flag&& loc_p > 0+eps ){
					min_p = loc_p;
					ans[0] = a.a;
					ans[1] = b.a;
					ans[2] = c.a;
					flag = true;}
				else if(loc_p < min_p-eps && loc_p > 0+eps){
					min_p = loc_p;
					ans[0] = a.a;
					ans[1] = b.a;
					ans[2] = c.a;
				}
			}

	for(int i = 0; i<3; i++)
		cout << '(' << ans[i].x << ',' << ans[i].y << ')' << '\n';
    return 0;
}
/*
9
0 0
0 1
1 0
1 1
0 2
2 0
2 2
2 1
1 2*/
