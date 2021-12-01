#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

int main() {
	int m[10000];
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> m[i];
	}
	if(n%2==0){
		int a = m[n/2-1];
		m[n/2-1]= m[n/2];
		m[n/2] = a;
	}
	else
		m[n/2]=m[n/2]*2;

	for (int i = 0; i<n; i++){
			cout << m[i] << ' ';
		}
	return 0;
}
