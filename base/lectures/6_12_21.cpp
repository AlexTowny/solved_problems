#include <iostream>
#include <string>
#include <ctype.h>
#include <map>
#include <fstream>

using namespace std;

struct student{
		int group;
		int report_number;
		string name;
	};

student read_student(string inp){
	student new_stud;
	int cur_l = 0;
	int cur_r = inp.find(",");

	new_stud.name = inp.substr(cur_l, cur_r);

	cur_l = cur_r;
	cur_r = inp.find(",", cur_l+1);
	new_stud.group = stoi(inp.substr(cur_l+1, cur_r-cur_l));

	cur_l = cur_r;
	cur_r = inp.find(",", cur_l+1);
	new_stud.report_number = stoi(inp.substr(cur_l+1, cur_r-cur_l));

	return new_stud;
}

int main(){

	student students_list[10];

	setlocale(LC_CTYPE, "rus");


	ifstream students_file("stud.txt");

	string buff_text;

	int n=0;

	while (getline(students_file, buff_text)) {
	        students_list[n] = read_student(buff_text);

	        n++;
	        }
	students_file.close();

	int mcn = 0;
	int mcn_student = 0;

	for(int i = 0; i < n; i++){
		int cn = students_list[i].group/100%10;
		if (mcn < cn){
			mcn = cn;
			mcn_student = i;
		}
	}

	cout << students_list[mcn_student].name;
	return 0;
}
