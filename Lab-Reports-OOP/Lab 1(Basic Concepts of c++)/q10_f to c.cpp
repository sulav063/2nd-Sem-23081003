/*Write a program that will ask for a temperature in Fahrenheit and display it in Celsius. (Hint C=
F-32/1.8)*/
#include <iostream>
using namespace std;
int main() {
    float fahrenheit, celsius;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}

