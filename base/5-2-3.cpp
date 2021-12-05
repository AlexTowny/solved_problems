#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {

  double ans = 0;
  int k;
  double one_m = 1;
  cin >> k;
  for (int n=1; n < k+1; n++){
	  ans += one_m/(n*n);
	  one_m *= -1;
  }
  cout << fixed << setprecision(6) << ans;
  return 0;
}
