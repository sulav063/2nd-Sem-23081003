/*Write a program to overload the unary minus operator using friend function.*/
#include <iostream>
using namespace std; 
class Number
{
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Overload the unary minus (-) operator using a friend function
    friend Number operator-(const Number &num)
    {
        return Number(-num.value);
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    int inputValue;
    cout << "Enter an integer value: ";
    cin >> inputValue;

    Number num(inputValue);
    num.display();

    Number negNum = -num; // Using the overloaded unary minus operator
    negNum.display();

    return 0;
}
