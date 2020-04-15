#include <iostream>
#include <string.h>
#include <string>
using namespace std;
void lvl1() {
    char str[15];
    cout << "Input string:\n ";
    cin.getline(str, sizeof(str));
    cout << "\n\nInput symbol:\n ";
    char str1[2];
    cin.getline(str1, sizeof(str1));
    if (strlen(str1) == 1) {
        strcat_s(str, str1);
        cout << str << endl;
    }
    else cout << "\n\nIncorrect symbol";
}
void lvl2() {
    char str[25];
    cout << "\n\nInput string:\n ";
    cin.getline(str, sizeof(str));
    int size = strlen(str);
    cout << "Size of array:  " << size << endl;
    char str1[3] = { (char)size + '0' };
    strcat_s(str, str1);
    cout << "The result: " << str << endl;
}
void lvl3() {
    char str[] = { "At!Vinta!!" };
    int indexOf = 0;
    cout << "Input string, including '!':\n\n ";
    cin.getline(str, sizeof(str));
    int size = strlen(str);
    cout << "Size of array:  " << size << endl;
    cout << "Before:\n" << str << endl;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == '!') {
            indexOf = i;
            //_strnset_s(str, '0' + (char)indexOf, i);
            str[i] = '0'+(char)indexOf;
        }
    }
    cout << "After:\n" << str<<endl;
}
int main() {
    lvl1();
    lvl2();
    lvl3();
    system("pause");
    return 0;
}
