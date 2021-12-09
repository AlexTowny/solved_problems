#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string clean_word(string &s){
	string new_s = "";
	for(int i = 0; i < s.length(); i++)
		if (isalnum(s[i]))
			new_s += tolower(s[i]);
	s = new_s;
	return new_s;
}

bool palindrom_valid(string s){
	string rev_s = s;
	reverse(rev_s.begin(), rev_s.end());
	return s == rev_s;
}

int main(){
	string str;

	while(cin >> str){
		if (clean_word(str)!=""){
			if(palindrom_valid(str))
				cout << str << ' ';
		}
	}


	return 0;
}
/*
Alla has no car

alla
-------------
aaaa alcla flf gog

aaaa alcla flf gog

-------------
Corn 141 cool 1955 wiNd wo1k 1o1 Did

141 1o1 did 
  */
