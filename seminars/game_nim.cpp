#include <iostream>
#include <string>
using namespace std;



int main() {
	int n,x,m;
	int turn = 0;
	cout << "Game Nim has been started!\nEnter number of stones.\n" ;
	cin >> n;
	cout << "Enter max number of stones for a turn\n";
	cin >> m;
	while(n>0){

	cout << "Player " + to_string(turn%2+1) + "\n";

	cin >> x;
	if(x > 0 && x < m+1)
		n -= x;
	else{
		cout << "Wrong number, retry.\n";
		continue;}
	turn += 1;
	}
	cout << "Congratulations!\nPlayer " + to_string((turn-1)%2+1) + " won.";
	return 0;
}
