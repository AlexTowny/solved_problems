#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

  int n,k,d;
  int m[100][100];
  cin >> n >> k >> d;

  for(int i = 0; i<n; i++){
    for(int j = 0; j<k; j++){
      cin >> m[i][j];
	    if (m[i][j]<d)
		    m[i][j]*=2;
    }
  }

  for(int i = 0; i<n; i++, cout<< '\n')
    for(int j = 0; j<k; j++, cout<< ' ')
	  cout << m[i][j];
  return 0;
}
/*
3 3 3
1 1 1
1 1 1
1 1 1

2 2 2
2 2 2
2 2 2
-------
2 4 1
2 3 4 4
3 2 1 1

2 3 4 4
3 2 1 1
-------
4 4 5
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3

2 4 6 8 
4 6 8 2 
6 8 2 4 
8 2 4 6 
*/
