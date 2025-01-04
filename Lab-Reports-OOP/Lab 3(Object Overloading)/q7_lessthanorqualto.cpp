/*Write a program overloading the relational operator &lt;= which can be used for the user defined
objects for a class Distance to compare two distance objects.*/
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    bool operator<=(const Distance& other) const {
        float thisTotal = feet + (inches / 12.0);
        float otherTotal = other.feet + (other.inches / 12.0);
        return thisTotal <= otherTotal;
    }

    bool operator<(const Distance& other) const {
        float thisTotal = feet + (inches / 12.0);
        float otherTotal = other.feet + (other.inches / 12.0);
        return thisTotal < otherTotal;
    }

    bool operator==(const Distance& other) const {
        return (feet == other.feet) && (inches == other.inches);
    }

    void readInput() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    Distance d1, d2;

    cout << "Enter the values for Distance 1:" << endl;
    d1.readInput();

    cout << "Enter the values for Distance 2:" << endl;
    d2.readInput();

    cout << "Distance 1: ";
    d1.display();
    cout << endl;

    cout << "Distance 2: ";
    d2.display();
    cout << endl;

    if (d1 < d2) {
        cout << "Distance 1 is less than Distance 2." << endl;
    } else if (d1 == d2) {
        cout << "Distance 1 is equal to Distance 2." << endl;
    } else {
        cout << "Distance 1 is greater than Distance 2." << endl;
    }
    return 0;
}
