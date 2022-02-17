#include <iostream>
#include <string>
#include <cmath>
using namespace std;



int main() {
	string st;
	bool flag;

	int min_d;
	bool min_find = false;

	bool d_find = false;

	int digit = 0;
	int d_order = 1;
	getline(cin, st);

	for(int i = st.length()-1; i > 0; i--){
		if(isdigit(st[i])){
			d_find = true;
			if(flag){
				digit += (st[i]-'0')*d_order;
				d_order *= 10;
			}
			else{
				d_order = 1;
				digit = 0;
				flag = true;
				digit += (st[i]-'0')*d_order;
			}
		}
		else{
			if(flag && st[i]=='-')
				digit *= -1;
			flag = false;
			if(d_find){
				if(min_find){
					min_d = min(min_d, digit);
				}
				else{
					min_find = true;
					min_d = digit;
				}
			}
		}
}

	if(d_find)
		cout << min_d;
	else
		cout << "There is no any digits.";
	return 0;
}
