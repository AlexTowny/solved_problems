
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

double _pow(double x, int n){
	double ans = 1;
	for(int i = 0; i<n; i++)
		ans *= x;
	return ans;
}

double& _pow_link(double &x, int n){
	if (n==0)
		x = 1;
	for(int i = 0; i<n-1; i++)
		x *= x;
	return x;
}

template <typename R> R _pow_t(R x, int n){
	R ans = 1;
	for(int i = 0; i<n; i++)
		ans *= x;
	return ans;
}


int main(){
	int a;
	double b;
	cin >> b >> a;
	cout << _pow(b,a) << endl;
	cout << _pow_t(b,a) << endl;
	cout << _pow_link(b,a) << endl;


}
