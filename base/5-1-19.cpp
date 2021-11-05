#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {

  double ans = 0, sin_sum = 0;
  int n;
  cin >> n;
  for (int i=1; i < n+1; i++){
	  sin_sum += sin(i+0.0);
	  ans += 1/sin_sum;
  }
  cout << fixed << setprecision(6) << ans;
  return 0;
}
