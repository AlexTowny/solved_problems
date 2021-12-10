#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void show_array(int** m, int row, int col){
	for(int i = 0; i< row; i++, cout<<'\n')
		for(int j = 0; j< col; j++, cout<<' ')
			cout << setw(4) << m[i][j];
}

int main() {

  double ans = 0;
  int n;
  cin >> n;
  int** m = new int*[n];
  for (int i = 0; i<n; i++)
	  m[i] = new int[n];

  for (int i = 0; i<n; i++)
	  for(int j = 0; j<n; j++)
		cin >> m[i][j];

  show_array(m,n,n);

  if(n==1){
	  cout << "Subdiagonal doesn't exist.";
	  return 0;
  }
  for (int i=0; i<n;i++)
	for(int j = n-1; j>n-i-1; j--)
		  ans += m[i][j];



  cout << fixed << setprecision(6) << ans/((n*(n-1))/2);

  return 0;
}
/*
4
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
3.333333
-----------
6
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1
-----------
3
100000 10000 10000000
10000000 1000000 100000
1 1 1
33334.000000
*/
