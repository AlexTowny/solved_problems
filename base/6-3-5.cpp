#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

  double ans = 0;
  int n;
  cin >> n;
  double** m = new double*[n];
  for (int i = 0; i<n; i++)
	  m[i] = new double[n];

  for (int i = 0; i<n; i++)
	  for(int j = 0; j<n; j++)
		cin >> m[i][j];

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
*/
