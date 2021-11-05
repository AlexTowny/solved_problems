#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

  int n;
  cin>>n;


  int a = 2;
  int b = 4;
  int c;

  for(int i=1;i<n+1;i++){
	 if (i > 2){
	 c = b;
	 b = 6*b-a;
	 a = c;
	 cout << "b"<< i << " = " <<   b << '\n';
	 }
	 else
		 cout << "b"<< i << " = " <<  ((i==1)?(a):(b)) << '\n';
  }
  //cout << ((n>1)?(b):(a));
  return 0;
}
