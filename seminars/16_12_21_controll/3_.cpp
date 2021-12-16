#include <iostream>
#include <iomanip>

using namespace std;

int** createMatrix(int n){
	int** m =  new int*[n];
	for(int i = 0; i<n; i++)
			m[i] = new int[n];
	return m;
}

void deleteMatrix(int** &m, int n){
	for(int i = 0; i<n; i++)
		delete[] m[i];
	delete[] m;
	m = nullptr;
}

int main() {
	int n;
	int count_n=0;
	cout << "Enter matrix(NxN) size:";
	cin >> n;

	int** a = createMatrix(n);


	cout << "Enter all elements of array:\n";
	for(int i = 0; i< n; i++)
		for(int j = 0; j< n; j++)
			cin >> a[i][j];

	cout << "Entered matrix:\n";
	for(int i = 0; i< n; i++, cout << '\n')
			for(int j = 0; j< n; j++, cout << ' ')
				cout << setw(4) << a[i][j];

	for(int i = n-2; i< n; i++)
		for(int j = 0; j< n; j++)
			if(a[i][j]<0)
				count_n += 1;
	cout << "Count of negative elements in last two rows of matrix: ";
	cout << count_n;
	deleteMatrix(a,n);
	return 0;
}
