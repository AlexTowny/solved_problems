#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

string operator*(string a, int n){
	string ans = "";
	for (int i = 0; i < n; i++)
		ans += a;
	return ans;
}

void drw(int n, int i = 1){

	cout << to_string((i+1)%2)*i << endl;
	if (n == i)
		return;
	drw(n, i+1);
	cout << to_string((i+1)%2)*i << endl;
}

int main() {

	drw(4);
	return 0;
}
