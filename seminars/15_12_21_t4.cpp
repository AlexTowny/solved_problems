#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int max_(int &a, int b){
	if(a>b)
		return false;
	a = b;
	return true;
}

bool solve(int &a, int &b, int &c){
	return max_(a ,0) || max_(b ,0) || max_(c ,0);
}


int main() {
	int a,b,c;
	cin >> a >> b >> c;
	cout << solve(a,b,c) << '\n';
	cout  << a << ' ' << b << ' ' << c;
	return 0;
}
/*
-1 2 3
1

0 2 3*/
