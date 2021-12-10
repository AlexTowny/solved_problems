
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void delate_row(int** &a, int &n, int idx){
	for (int i = idx; i<n-1; i++)
		a[i] = a[i+1];
	n--;
}

void delate_col(int** &a, int &n, int &m , int idx){
	for (int j = idx; j<m-1; j++)
		for (int i = 0; i<n; i++)
			a[i][j] = a[i][j+1];
	m--;
}
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

	int n,m,k,g;
	cin >> n >> m;
	cin >> k >> g;
	int** a = new int*[n];

	for (int i = 0; i < n; i++)
		a[i] = new int[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	show_array(a,n,m);
	if(n==m){
		bool flag = true;
		for (int i = 0; i < n; i++)
				flag &= (a[i][k]==a[g][i]);
		if(flag)
		{
			delate_row(a,n,k);
			delate_col(a,n,m,g);
		}
	}
	else
		cout << "Can't make compare!\n";

	for (int i = 0; i < n; i++, cout << '\n')
			for (int j = 0; j < m; j++)
				cout << a[i][j] <<' ';
	deleteArray(a,n,m);
  return 0;
}
/*
4 4
0 0
1 2 3 4
2 3 3 3
3 3 3 3
4 4 4 4

3 3 3
3 3 3
4 4 4
----
3 4
1 2
1 1 1 1
2 3 4 5
6 7 8 9

Can't make compare!
1 1 1 1
2 3 4 5
6 7 8 9
----------
3 3
1 1
2 1 4 
1 1 1
3 1 5

2 4 
3 5 
*/
