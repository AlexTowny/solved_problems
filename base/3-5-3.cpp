#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

double func(double x){
	return sqrt(pow(x,2)-1);
}

int main() {

  double a,b,h;
  cout.precision(9);
  cout << "Please, enter a,b,h value" << '\n';
  cin >> a >> b >> h;

  cout << 'x' << " | " << "f(x)" << '\n';
  cout << "-------------------------\n";
  for (double i = a; i <= b; i+=h){
	  cout << fixed << i << " | " << func(i) << '\n';
  }
  cout << "-------------------------";
  return 0;
}
