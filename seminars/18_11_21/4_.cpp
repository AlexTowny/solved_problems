#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double pi = acos(-1);
const double eps = 1e-6;

long n;

int main() {
	cin >> n;
	long sum = 0,sum_2 = 0;
	for (int i = 0; i<=n; i++){
		sum += i;
	}
	for (int i = n; i>0; i--){
			sum_2 += i;
		}

	cout << fixed << setprecision(6) << sum << " " << sum_2;
	return 0;
}
