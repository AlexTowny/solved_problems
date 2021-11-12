#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

  int ans = 0;
  const int l=5, w=5;
  int m[5][5] = {{1,2,3,4,5},
		  	     {1,2,3,4,5},
			     {1,2,3,4,5},
			     {1,2,3,4,5},
			     {1,2,3,4,5}};

  for (int i=0; i<l;i++){

	  for(int j = w-1; j>w-i-1; j--)
		  ans += m[i][j];

  }

  cout << fixed << setprecision(6) << ans/((l*w-l)/2);
  //4
  return 0;
}
