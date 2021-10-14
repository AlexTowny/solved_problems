#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

bool valid(int k){
  int a = k%10;
  int b = k/10;

  return a!=b;
}

int main() {

  for (int i = 10; i < 100; i++)
    cout << (valid(i)?(to_string(i) + ' '):(""));
  cout << '\n';

  int n = 9;

  while (n++ < 100)
    cout << (valid(n)?(to_string(n)+ ' '):(""));
  cout << '\n';

  n = 10;

  do{
  cout << (valid(n)?(to_string(n)+ ' '):(""));
  }while(n++ < 100);
  cout << '\n';

  return 0;
}
