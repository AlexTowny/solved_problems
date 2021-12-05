#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {

  double ans = 0,last = 0;
  double e;
  double flag_t = 3;
  cin >> e;

  for(;;){
	  ans += 1 / sqrt(flag_t);
	  if (abs(last-ans)<e)
		  break;
	  last = ans;
	  flag_t *= 3;
  }
  cout << fixed << setprecision(12) << ans;
  return 0;
}
