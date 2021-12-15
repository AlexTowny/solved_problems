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
	for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (table[i][j]%2==0)
					cout << '(' << i <<',' << j << ");" << ' ';
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
3 3
1 2 1
2 1 2
1 2 1

   1   2   1
   2   1   2
   1   2   1
(0,1); (1,0); (1,2); (2,1);*/
