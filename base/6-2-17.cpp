
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
const double eps = 1e-6;
int main() {


	int n;
	double d;
	int ans=0;

	cin >> n;
	cin >> d;
	double* m = new double[n];

	for (int i = 0; i<n;i++)
		cin >> m[i];



	for (int i = 1; i<n; i++){
		ans += ((abs(m[i-1]-m[i])-d<eps)?(1):(0));
	}

	cout << ans;

  return 0;
}
/*
6 1
1 2 3 4 5 6
5
------
1 1
5
0
------
5 1.1111
1.1111 2.2222 3.3333 4.4444 5.5555
4
*/
