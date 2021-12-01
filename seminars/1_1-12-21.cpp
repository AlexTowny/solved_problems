#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

struct Vector2{
	double x;
	double y;
};

Vector2 middle_line(Vector2 C,Vector2 D){
	Vector2 R;
	R.x = (C.x+D.x)/2;
	R.y = (C.y+D.y)/2;
	return R;
}

char valid_line(Vector2 C,Vector2 D){
	if (C.x == D.x)
		return 'v';
	else if(C.y == D.y)
		return 'h';
	else
		return 's';
}

int main() {
	int n;
	int count_type[3] = {0,0,0};
	Vector2 A,B;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> A.x >> A.y;
		cin >> B.x >> B.y;
		switch(valid_line(A,B)){
		case 'v':
			count_type[0] += 1;
			break;
		case 'h':
			count_type[1] += 1;
			break;
		case 's':
			Vector2 ans = middle_line(A,B);
			cout << "Wow! It`s slope line, middle point: (" << ans.x << ';'<< ans.y << ')' <<'\n';
			count_type[2] += 1;
			break;
		}
	}
	return 0;
}
