#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
	ifstream inp1("input1.txt");
	ifstream inp2("input2.txt");
	ofstream outp("output.txt");
	unsigned int num1,num2;
	while(inp1 >> num1){
		inp2 >> num2;
		if(num1%num2 == 0)
			outp << num1/num2 << ' ';
		else if(num2%num1 == 0)
			outp << num2/num1 << ' ';
	}

	return 0;
}
