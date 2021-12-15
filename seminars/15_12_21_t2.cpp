#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int** createArray(int n, int m)
{
	int ** table = new int *[n];
	for (int i = 0; i < n; i++)
		table[i] = new int[m];
	return table;
}

void readArray(int ** table, int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> table[i][j];
}

void printArray(int ** table, int n, int m)
{
	for (int i = 0; i < n; i++, cout << endl)
		for (int j = 0; j < m; j++)
			cout << setw(4) << table[i][j];
}

void deleteArray(int **&table, int n, int m)
{
	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete[] table;
	table = nullptr;
}

void transposeArray(int ** &table, int &n, int &m)
{
	int **tmp = createArray(m, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tmp[j][i] = table[i][j];
	deleteArray(table, n, m);
	swap(n, m);
	table = tmp;
}

int** getTransposedArray(int ** table, int n, int m)
{
	int **tmp = createArray(m, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tmp[j][i] = table[i][j];
	return tmp;
}

void solve(int** table,int n, int m){
	for (int i = 0; i < m; i++){
			int sum_n = 0;
			int max_n = 0;
			int n_x = 0;
			for (int j = 0; j < n; j++)
				if (table[j][i]<0){
					sum_n += table[j][i];
					if(table[j][i]<max_n){
						max_n = table[j][i];
						n_x = j;
					}
				}
			if(sum_n < 0){
				cout << "sum of negatives: " << sum_n << " min position: " << i <<','<< n_x << '\n';
			}
			else
				cout << "sum of negatives: " << sum_n << " min position: " << -1 << '\n';
	}
}

int main() {
	int n,m;
	cin >> n >> m;
	int** a = createArray(n,m);
	readArray(a,n,m);
	printArray(a,n,m);
	solve(a,n,m);
	return 0;
}
/*
4 4 
-1 2 3 4
-3 -2 -5 1
-9 -1 1 1
0 4 4 5

  -1   2   3   4
  -3  -2  -5   1
  -9  -1   1   1
   0   4   4   5
sum of negatives: -13 min position: 0,2
sum of negatives: -3 min position: 1,1
sum of negatives: -5 min position: 2,1
sum of negatives: 0 min position: -1*/
