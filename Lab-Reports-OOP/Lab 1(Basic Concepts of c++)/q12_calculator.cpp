/*Create a calculator using switch statement*/
#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter 1st number: ";
    cin >> num1 ;
    cout << "Enter 2nd number: ";
    cin >> num2;
    

    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}


