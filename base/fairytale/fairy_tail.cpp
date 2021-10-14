#include <iostream>
#include <string>
#include <ctype.h>
#include <map>
#include <fstream>

using namespace std;

string text;
bool line_correct = true;
int line_length = 100;
string fishmen, action;
map<string, string> names;

int main()
{
    setlocale(LC_CTYPE, "rus");
    
    ifstream story_file("story.txt");

    string buff_text;
    
    while (getline(story_file, buff_text)) {
        text += buff_text;
    }
    names["n"] = '\n';
    cout << "Кем был глвный герой?\n";
    cin >> names["hero"];
    cout << "Чем он занимался?\n";
    cin >> names["job"];
    cout << "Его любимая еда?\n";
    cin >> names["meal"];
    cout << "Что дал король главному герою?\n";
    cin >> names["price"];
    cout << "Что принёс брат главного героя королю?\n";
    cin >> names["beast"];
    system("cls");
   
    cout << "КРУГЛЫЙ КАМЕНЬ\n\n";

    
    int count_s = 0;
    
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == '%') {
            int j = 1;
            string key = "";
            while (isalpha(text[i + j])) {
                key += text[i + j];
                j += 1;
            }
            i += j - 1;
            std::cout << names[key];
        }
        else
            std::cout << text[i];
        
        if (count_s > line_length && text[i+1] == ' ' && line_correct) {
            if (isalpha(text[i + 1]) && isalpha(text[i]))
                std::cout << '-';
            std::cout << '\n';
            count_s = 0;
        }
        
        count_s++;
    }
    story_file.close();
    return 0;
}
