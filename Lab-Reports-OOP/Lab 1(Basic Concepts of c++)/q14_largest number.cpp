  /*Write a program to find the largest among three numbers using the if-else statement:*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rdnumber: ";
    cin >> num3;

    int largest;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}

