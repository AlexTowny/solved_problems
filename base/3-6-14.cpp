#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
const double e = 1e-9;
double func(double x){
	if(x<0-e)
		return 0.2*pow(x,2) - x - 0.1;
	else if(x- 0.1<e)
		return 0;
	else
		return pow(x,2)/(x - 0.1);
}

int main() {

  double a,b,h;
  cout.precision(9);

  cout << "Please, enter a,b,h value" << '\n';
  cin >> a >> b >> h;
  cout << 'x' << " | " << "f(x)" << '\n';
  cout << "-------------------------\n";
  for (double i = a; i<b+e; i+=h){
	  cout << fixed << i << " | " << func(i) << '\n';
  }
  cout << "-------------------------";
  return 0;
}
