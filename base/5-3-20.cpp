#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {

  double ans = 0,last = 0;
  double e;
  int i = 1;
  cin >> e;

  for(;;){
	  ans += 1 / sqrt(pow(3,i));
	  if (abs(last-ans)<e)
		  break;
	  last = ans;
	  i++;
  }
  cout << fixed << setprecision(12) << ans;
  return 0;
}
