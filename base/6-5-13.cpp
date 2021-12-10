
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void insert_idx(int* &a, int &k, int idx, int new_v){
	k++;
	for (int i = k; i > idx; i--)
		a[i] = a[i-1];
	a[idx] = new_v;

}



int main() {

	int n,d;
	cin >> n >> d;
	int maxv,maxi=0;
	int max_size = n*2;
	int* m = new int[max_size];

	for (int i = 0; i < n; i++)
		cin >> m[i];

	maxv = m[0];

	for (int i = 1; i < n; i++)
		if(m[i]>=maxv){
			maxv = m[i];
			maxi = i;
		}

	insert_idx(m, n, maxi+1, d);

	for (int i = 0; i < n; i++)
			cout << m[i] << ' ';
	delete[] m;

  return 0;
}
/*
7 0
1 1 1 1 1 1 1

1 1 1 1 1 1 1 0
----
1 5
1

1 5
----------
5 5
0 1 2 3 4

0 1 2 3 4 5

*/
