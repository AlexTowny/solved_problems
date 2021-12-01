#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

const double eps = 1e-6;

int main() {
	unsigned int m[100000];
	unsigned int n;
	unsigned int ans;
	unsigned int k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> m[i];


	for(int i =0; i<n; i++){
		for(int j = i+1; j < n; j++){
			if(m[i]+m[j] == k)
				ans += 1;
		}
	}

	cout << ans;
	return 0;
}
