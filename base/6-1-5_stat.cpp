#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

  int n,d;
  int m[10000];
  cin >> n >> d;

  for(int i = 0; i<n; i++){
	  cin >> m[i];
	  if (m[i]<d)
		  m[i]*=2;
  }

  for(int i = 0; i<n; i++)
	  cout << m[i] << ' ';
  return 0;
}
/*
5 3
1 2 3 4 5
2 4 3 4 5
----------
1 1
1
1
----------
4 1000000
1 2 21 12
2 4 42 24 
*/
