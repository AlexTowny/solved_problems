#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];

	for(int i = 0; i<n; i++)
		cin >> a[i];

	for(int i = 0; i<n-1; i++)
			if(a[i]<0)
				a[i] = a[n-1];

	for(int i = 0; i<n; i++)
			cout << a[i] << ' ';

	return 0;
}
/*
8 
-1 3 4 -3 -4 5 8 0

0 3 4 0 0 5 8 0 */
