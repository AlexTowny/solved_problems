#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

template <typename MA> MA** createArray(int n, int m)
{
	MA ** table = new MA *[n];
	for (int i = 0; i < n; i++)
		table[i] = new MA[m];
	return table;
}

int main() {
	int n,m;
	cin >> n >> m;
	int** a = createArray<int>( n, m);

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	return 0;
}
