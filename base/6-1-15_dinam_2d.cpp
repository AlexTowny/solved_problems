
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

  int n,m;

  cin >> n >> m;
  int** a = new int*[n];

  for (int i = 0; i<n; i++)
	  a[i] = new int[m];


  for(int i = 0; i<n; i++)
	  for(int j = 0; j<m; j++)
		  cin >> a[i][j];

  show_array(a,n,m);
  for(int i = 0; i<n; i++)
	  for(int j = 0; j<m; j++)
	  if (a[i][j]%7!=0)
		  cout << '(' << i+1 << ',' << j+1 << ") ";
  deleteArray(a,n,m);
  return 0;
}
/*
3 3
1 2 3
7 7 7
3 2 1

(1,1) (1,2) (1,3) (3,1) (3,2) (3,3)
----------
2 4
1 2 3 4
7 14 49 56

(1,1) (1,2) (1,3) (1,4)
----------
3 2
35 36
37 38
39 40

(1,2) (2,1) (2,2) (3,1) (3,2) 

*/
