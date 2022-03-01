#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int calc(int* table, int n, int cur=0){
	if(cur==n)
		return 1;
	return table[cur]*calc(table, n, cur+1);
}

int main() {

	int* abc = new int [4];
	for(int i = 1; i < 5; i++)
		abc[i-1] = i;
	cout << calc(abc, 4);
	return 0;
}
