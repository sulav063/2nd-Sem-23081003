/*Create a class named feet with required data members and member function to add two
lengths given by user in feet and inches.*/
#include <iostream>
using namespace std;

class Feet {
    private:
    int feet, inches;

    public:
    void getLength() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
            cin >> inches;
    }

    void displayLength() {
        cout << "Feet: " << feet << "'" << " Inches: " << inches << "\"" << endl;
    }

    void add(Feet f1, Feet f2) {
        inches = f1.inches + f2.inches;
        feet = f1.feet + f2.feet + (inches / 12);
        inches = inches % 12;
    }
};

int main() {
    Feet f1, f2, f3;
    cout << "Enter first length: " << endl;
    f1.getLength();
    cout << "Enter second length: " << endl;
    f2.getLength();
    f3.add(f1, f2);
    cout << "Total length: " << endl;
    f3.displayLength();
    return 0;
}