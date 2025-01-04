/*WAP to concatenate strings with operator overloading (+) operator.*/
#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char* str;
    int len;

    String(const char* s) {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    String operator+(const String& s) {
        int new_len = len + s.len + 1;
        char* new_str = new char[new_len];
        strcpy(new_str, str);
        new_str[len] = ' ';  
        strcpy(new_str + len + 1, s.str);  
        return String(new_str);
    }
};

int main() {
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin >> s1;
    String str1(s1);
    cout << "Enter the second string: ";
    cin >> s2;
    String str2(s2);
    String str3 = str1 + str2;
    cout << "The concatenated string is: " << str3.str << endl;

    return 0;
}
