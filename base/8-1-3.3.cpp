#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int sum_div(int N){
	int sum_d = 0;//N+1;
	for (int i = 2; i < N; i++)
		if(N%i==0)
			sum_d += i;
	return sum_d;
}

int main() {
	int a,b;

	int max_sum_d;
	bool max_find = false;

	int order = 0;

	cin >> a >> b;

	int* val_ = new int [b-a];

	for(int i = a; i <= b; i++)
		if(max_find){
			int cl = sum_div(i);
			if(cl == max_find){
				val_[order]=i;
				order++;
			}
			else if (cl > max_find) {
				delete[] val_;
				val_ = new int [b-a];
				val_[0]=i;
				order = 1;
			}
		}
		else{
			max_find = true;
			max_sum_d = sum_div(i);
			val_[order] = i;
			order++;
		}

	for(int i = 0; i<order; i++)
		cout << val_[i] << endl;
	return 0;
}

