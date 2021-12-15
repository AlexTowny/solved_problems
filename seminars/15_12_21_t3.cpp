#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;





int main() {
	long k,mult = 0;
	while(cin >> k)
	{
		if(k%13==0)
			break;
		else if(k%10==0 && k != 0){
			if(mult==0)
				mult = 1;
			mult *= k;
		}
	}
	cout << mult;
	return 0;
}
/*
10 120 110 13

132000*/
