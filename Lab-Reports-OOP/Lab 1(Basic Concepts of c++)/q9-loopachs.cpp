/*Write a program to input integer value from keyboard and display on screen Welcome to ACHS
College that many times.(Hint: For loop)*/
#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter an integer value: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << "Welcome to ACHS College" << endl;
    }

    return 0;
}

