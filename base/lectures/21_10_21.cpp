#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	string st = "мы учимся дистанционно";

	cout << "1. " << st.length() << '\n';
	cout << "2. " << st.find("и") << '\n';
	cout << "3. " << st.find("и",7) << '\n';
	cout << "4. " << st.rfind("и") << '\n';
	cout << "5. " << st.insert(0,"В ноябре ") << '\n';
	cout << "6. " << st.erase(st.find("мы"),st.find("мы")+2) << '\n';
	return 0;
}
