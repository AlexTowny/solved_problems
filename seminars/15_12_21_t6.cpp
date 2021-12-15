#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n,d=0;
	cin >> n;
	int* a = new int[n];

	for(int i = 0; i<n; i++){
		cin >> a[i];
		if(a[i]<0)
			d = a[i];
	}
	if (d<0)
		for(int i = 0; i<n-1; i++)
				if(a[i]<0)
					a[i] = d;

	for(int i = 0; i<n; i++)
			cout << a[i] << ' ';

	return 0;
}
/*
5
1 2 3 4 5

1 2 3 4 5  
-----------
6
-1 -3 2 5 -9 0

-9 -9 2 5 -9 0 */
