#include <iostream>
#include <iomanip>

using namespace std;

void solve(char &symb){
	if (symb == '-')
		symb = '+';
	else
		symb = '#';
}

int main() {
	//demo
	char ch;
	while(cin >> ch){
		solve(ch);
		cout << ch << '\n';
		}
	return 0;
}
