#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double age;
    cin >> age;
    if (age < 1.)
        cout << "младенец";
    else if(age < 11.)
        cout << "ребенок";
    else if (age < 15.)
        cout << "подросток";
    else if (age < 25.)
        cout << "юноша";
    else if (age < 70.)
        cout << "мужчина";
    else if (age >= 70.)
        cout << "пожилой человек";
    return 0;
}
