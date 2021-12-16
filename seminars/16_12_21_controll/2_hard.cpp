#include <iostream>
#include <iomanip>
using namespace std;
const double eps = 1e-6;



int main() {
	int n;
	cin >> n;

	int* m = new int[n];

	for(int i = 0; i<n; i++)
		cin >> m[i];

	int a=-1,b,b_2=-1,l,r;

	for(int i = 0; i<n; i++){
		if(m[i]%2!=0)
			a = i;
		if(m[i] > 0)
			b = i;
			b_2 = b;
	}

	if(a!=-1 && b!=-1){
		l = min(a,b);
		r = max(a,b);
	}

	for(int i = l+1; i < r; i++)
		m[i] = i;

	for(int i = 0; i<n; i++)
		cout << m[i] << ' ';

	return 0;
}
