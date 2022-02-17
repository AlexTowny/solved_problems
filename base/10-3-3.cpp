#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;



int main() {
	ofstream out("res.dat", ios::binary);
	int n;
	double c;
	cin >> n;
	for(int i = 1; i<=n; i++){
		c =1.0/i;
		out.write((char *)&c, sizeof(c));
	}
	out.close();
	ifstream in("res.dat", ios::binary);
	//in.seekg(sizeof(double));
	int cc = 1;
	while(in.peek() != EOF){
		in.read((char *)&c, sizeof(double));
		if(cc%3==0)
			cout << c << endl;
		cc++;
		//in.seekg(sizeof(double),ios::cur);
	}
	in.close();
	return 0;
}
