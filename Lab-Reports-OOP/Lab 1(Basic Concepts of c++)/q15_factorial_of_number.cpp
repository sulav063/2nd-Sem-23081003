/*Write a program to find the factorial of a n number using For Loop, While Loop*/
#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Factorial using for loop
    int factorialFor = 1;
    for (int i = 1; i <= num; i++) {
        factorialFor *= i;
    }

    cout << "Factorial using for loop: " << factorialFor << endl;

    // Factorial using while loop
    int factorialWhile = 1;
    int counter = 1;
    while (counter <= num) {
        factorialWhile *= counter;
        counter++;
    }

    cout << "Factorial using while loop: " << factorialWhile << endl;

    return 0;
}

