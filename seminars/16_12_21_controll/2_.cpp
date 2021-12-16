#include <iostream>
#include <iomanip>

using namespace std;

double const eps = 1e-6;

int main() {
	int n;
	cout << "Enter length of array of numbers:";
	cin >> n;
	double* a = new double[n];
	cout << "Enter all elements of array:";
	for(int i = 0; i< n; i++)
		cin >> a[i];

	cout << "Indexes of double-digit numbers(Numbering start from 0):";
	for(int i = 0; i< n; i++)
		if(abs(a[i])>10-eps && abs(a[i])<100-eps)
			cout << i << ' ';
	delete [] a;
	a = nullptr;
	return 0;
}


