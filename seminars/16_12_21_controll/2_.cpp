#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cout << "Enter length of array of numbers:";
	cin >> n;
	int* a = new int[n];
	cout << "Enter all elements of array:";
	for(int i = 0; i< n; i++)
		cin >> a[i];

	cout << "Indexes of double-digit numbers(Numbering start from 0):";
	for(int i = 0; i< n; i++)
		if(a[i]>9 && a[i]<100)
			cout << i << ' ';
	delete [] a;
	return 0;
}


