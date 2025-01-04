/*Create a class named complex with required data member and member function to add two
complex equation( x+ya where x and y are two real number and a is imaginary number for
example input and output form should be like“2+3a”)
[Hint use default constructor to initialize value , parameterized constructor for input and create
function with object as arguments)*/
#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imaginary;

    public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }

    void display() {
        cout << real << "+" << imaginary << "a" << endl;
    }
};

int main() {
    float r1, i1, r2, i2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex sum = c1.add(c2);
    sum.display();
    return 0;
}