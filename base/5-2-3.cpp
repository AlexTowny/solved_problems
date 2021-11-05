#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {

  double ans = 0;
  int k;
  cin >> k;
  for (int n=1; n < k+1; n++){
	  ans += pow(-1,n+1)/pow(n,2);
  }
  cout << fixed << setprecision(6) << ans;
  return 0;
}
