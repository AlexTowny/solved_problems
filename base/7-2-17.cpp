#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
	string str;
	getline(cin, str);

	int l,r=0;

	l = str.find(" ")+1;
	r = str.find(" ", l);

	cout << ((r>l)?(str.substr(l, r-l)):(""));
	return 0;
}
/*
aaaa bbb aaa

bbb
-------------
aaaabb bbbb


-------------
a b c d e f g

b
  */
