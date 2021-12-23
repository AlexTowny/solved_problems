#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

struct product{
	string name;
	double cost;
	string sort;
	double count;

	void increase_cost(double per){
		cost*= 1.0 + per/100;
	}

};

int main() {
	ifstream inp("data.txt");

	string name,sort;
	double cost, count;

	product list_product[1000];

	int count_n = 0;

	double x;
	inp >> count_n;
	for(int i = 0; i<count_n; i++){
		inp >> name >> cost >> sort >> count;
		list_product[i].name = name;
		list_product[i].sort = sort;
		list_product[i].cost = cost;
		list_product[i].count = count;
	}
	inp.close();
    cin >> x;
	for(int i = 0; i<count_n; i++)
		list_product[i].increase_cost(x);


	cout << setw(12) << "Kind" <<
			setw(12) << "Cost" <<
			setw(12) << "Sort" <<
			setw(12) << "Count" << '\n';

	for(int i = 0; i < count_n; i++)
		cout << setw(12) << list_product[i].name << setw(12) <<
						   list_product[i].cost << setw(12) <<
						   list_product[i].sort << setw(12) <<
						   list_product[i].count << '\n';


	return 0;
}
