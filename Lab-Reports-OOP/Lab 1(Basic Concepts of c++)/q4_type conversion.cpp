/*WAP to demonstrate the automatic type conversion.*/
#include <iostream>
using namespace std;
int main() {
    int num1;
    float num2;
    float result;

    cout << "Enter an integer number: ";
    cin >> num1;

    cout << "Enter a floating-point number: ";
    cin>> num2;

    // Automatic type conversion from int to float
    result = num1 + num2;

    cout << "Result: " << result << endl;

    return 0;
}

