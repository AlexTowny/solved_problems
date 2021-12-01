#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

int main() {
	int m[100000];
	int n;
	cin >> n;
	m[0] = 1;
	m[1] = 1;
	for (int i = 2; i < n; i++)
		m[i] = m[i-1] + m[i-2];

	for (int i = n-1; i >= 0; i--)
		cout << m[i] << ' ';

	return 0;
}

