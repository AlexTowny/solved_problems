
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void delate_idx(int* &a, int &k, int idx){
	for (int i = idx; i < k-1; i++)
		a[i]=a[i+1];
	k--;
}

void delate_repeat(int &k, int* &a){
	for (int i = 0; i < k; i++)
		for (int j = i+1; j < k; j++)
			if (a[i]==a[j])
				delate_idx(a, k, j);

}

int main() {

	int n;
	cin >> n;
	int* m = new int[n];

	for (int i = 0; i < n; i++)
		cin >> m[i];

	delate_repeat(n,m);

	for (int i = 0; i < n; i++, cout << ' ')
			cout << m[i];
  return 0;
}
/*
6
1 1 2 2 3 3

1 2 3
----
4
1 2 3 4

1 2 3 4
----------
9
1 1 4 3 8 8 9 8 1

1 4 3 8 9

*/
