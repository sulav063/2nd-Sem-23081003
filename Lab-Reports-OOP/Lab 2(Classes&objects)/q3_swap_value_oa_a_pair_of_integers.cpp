/*Write a function using reference variable as argument to swap the value of a pair of integers.*/
#include <iostream>
using namespace std;

void swapIntegers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    swapIntegers(num1, num2);
    
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}
