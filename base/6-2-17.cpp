#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {

	int m[10];
	int n,d;

	int ans;

	cin >> n;
	for (int i = 0; i<n;i++)
		cin >> m[i];

	cin >> d;

	for (int i = 1; i<n; i++){
		ans += ((/*abs*/(m[i-1]-m[i])==d)?(1):(0));
	}

	cout << ans;

  return 0;
}
