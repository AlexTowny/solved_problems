#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
	ifstream inp("input.txt");
	string str;
	int max_len;
	bool flag = false;
	string max_str;
	while(getline(inp,str)){
		if(flag){
			if(str.length()>max_len){
				max_len = str.length();
				max_str = str;
			}
		}
		else{
			flag = true;
			max_str = str;
			max_len = str.length();
		}
	}
	cout << "Max strings length: " << max_len << endl;
	cout << "Max string: " << max_str;
	return 0;
}
/*
Max strings length: 88
Max string: aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
-------------
Max strings length: 51
Max string:    Spring's honied cud of youthful thought he loves
-------------
Max strings length: 44
Max string: FJFJESA;KJDNFSFEFJ;BWE  WEIJEI;F  WEOIJFWOI 
  */
