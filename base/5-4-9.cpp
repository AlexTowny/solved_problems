#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const double e = 1e-12;


int main() {



  double ans = 0,last = 0;
  double e;
  double a,b;
  double h = 0.1;

  double i = 1;

  cin >> a >> b;
  cin >> e;
  cout << setw(8) << "x" << '|' << setw(8) << "F(x)"<< '|' << setw(8) << "iterations" <<'\n';

  for (double x = a; x<b+e; x += h){
	  double sum_m = 1;
	  i = 1;
	  ans = 1;
	  last = 0;
	  for(;;){
		  sum_m *= i*2+1;
		  ans += x / sum_m;
		  if (abs(last-ans)<e)
			  break;
		  last = ans;
		  i++;
	  }
	  cout << fixed << setprecision(6)  << x << '|'
			  	  	  	  	  	  	    <<  ans << '|'
									    << i <<'\n';
  }

  return 0;
}
