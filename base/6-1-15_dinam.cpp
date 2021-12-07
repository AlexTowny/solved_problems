
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

  int n;

  cin >> n;
  int* m = new int[n];

  for(int i = 0; i<n; i++){
	  cin >> m[i];
  }

  for(int i = 0; i<n; i++)
	  if (m[i]%7==0)
		  cout << i+1 << ' ';
  return 0;
}
/*
4
7 0 14 49

1 2 3 4
----------
5
1 9 81 17 91

5
----------
3
374128947 324894 3048324

*/
