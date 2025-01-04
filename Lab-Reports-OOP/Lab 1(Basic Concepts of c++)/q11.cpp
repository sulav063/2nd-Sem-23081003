/*WAP to demonstrate function overloading with conditions
a. Parameters should have a different type
b. different number of parameters
c. Parameters should have a different sequence of parameters.*/
#include <iostream>
using namespace std;

void print(int num) { cout << "Printing integer: " << num << endl; }
void print(float num) { cout << "Printing float: " << num << endl; }
void print(char ch) { cout << "Printing character: " << ch << endl; }
void print(int num1, int num2) { cout << "Printing two integers: " << num1 << " and " << num2 << endl; }
void print(int num1, float num2) { cout << "Printing an integer and a float: " << num1 << " and " << num2 << endl; }
void print(float num1, int num2) { cout << "Printing a float and an integer: " << num1 << " and " << num2 << endl; }

int main() {
    print(10);
    print(3.14f);
    print('a');
    print(5, 10);
    print(3, 2.5f);
    print(1.23f, 4);
    return 0;
}
