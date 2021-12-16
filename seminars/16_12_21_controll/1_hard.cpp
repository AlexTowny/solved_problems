#include <iostream>
#include <iomanip>

using namespace std;

const double eps = 1e-6;

int main() {
	int n;
	cout << "Enter length of pairs\n";
	cin >> n;
	double a,b;
	double per_pair, count = 0;
	cout << "Enter all pairs\n";
	for(int i = 0; i<n; i++){
		cin>> a >> b;
		if(abs(a-b)<1+eps)
			count += 1;
		}
	per_pair = count/n;
	cout << "Percent of valid pairs:\n";
	cout << fixed << setprecision(6) << per_pair;
	return 0;
}
