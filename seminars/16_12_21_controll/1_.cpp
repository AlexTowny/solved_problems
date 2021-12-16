#include <iostream>

using namespace std;

int main() {
	int a,b,l,r;
	int sum_a = 0;
	cout << "Enter A value:";
	cin >> a;
	cout << "Enter B value:";
	cin >> b;

	l = min(a,b);
	r = max(a,b);

	for(int i = l; i< r + 1; i++)
		if(i%2==0 && i%4 != 0)
			sum_a += i;

	cout << sum_a;

	return 0;
}
