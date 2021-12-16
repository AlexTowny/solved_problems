#include <iostream>
#include <iomanip>
using namespace std;
const double eps = 1e-6;

double** createMatrix(int n){
	double** m =  new double*[n];
	for(int i = 0; i<n; i++)
			m[i] = new double[n];
	return m;
}

void deleteMatrix(double** &m, int n){
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

	double** a = createMatrix(n);


	cout << "Enter all elements of array:\n";
	for(int i = 0; i< n; i++)
		for(int j = 0; j< n; j++)
			cin >> a[i][j];

	cout << "Entered matrix:\n";
	for(int i = 0; i< n; i++, cout << '\n')
			for(int j = 0; j< n; j++, cout << ' ')
				cout << fixed << setprecision(6) << setw(9) << a[i][j];

	for(int i = n-2; i< n; i++)
		for(int j = 0; j< n; j++)
			if(a[i][j]<0-eps)
				count_n += 1;
	cout << "Count of negative elements in last two rows of matrix: ";
	cout << count_n;
	deleteMatrix(a,n);
	return 0;
}
