#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

  int n;
  cin>>n;

  int a[1000000];
  a[0] = 2;
  a[1] = 4;

  for(int i=2;i<n;i++){
	a[i] = 6*a[i-1] - a[i-2];
  }
  cout << a[n-1];
  return 0;
}
