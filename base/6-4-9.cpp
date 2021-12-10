
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
void show_array(int** m, int row, int col){
	for(int i = 0; i< row; i++, cout<<'\n')
		for(int j = 0; j< col; j++, cout<<' ')
			cout << setw(4) << m[i][j];
}

void deleteArray(int **&table, int n, int m)
{
	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete[] table;
	table = nullptr;
}
int main() {

	int n,d;
	cin >> n >> d;

	int* ans = new int[n];

	int** m = new int*[n];
	for (int i = 0; i<n; i++){
		m[i] = new int[n];
		ans[i] = 0;
	}

	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			cin >> m[i][j];
	show_array(m,n,n);

	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			ans[i] += ((m[i][j]>d)?(1):(0));
	deleteArray(m,n,n);
	for (int i = 0; i<n; i++, cout << ' ')
		cout << ans[i];
	delete[] ans;
  return 0;
}
/*
3 3
1 1 1
2 2 2
1 1 1

0 0 0
----------
3 5
1 2 3
4 5 6
7 8 9

0 1 3
----------
5 1
2 3 4 5 6
2 3 1 6 1
2 4 5 5 5
4 5 6 7 8
8 5 3 2 6

5 5 5 5 5

*/
