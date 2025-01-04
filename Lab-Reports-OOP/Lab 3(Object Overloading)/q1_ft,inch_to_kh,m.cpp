/*Write a program to convert one object to another. For this program, there should be two classes
called Feet and Kilometer. Your program must be able to convert (ft, inch) to (km, m). The
attributes of Feet are ft and inch and attributes of Kilometer are km and m.(1km=328 ft).
conversion in destination class.*/
#include <iostream>
using namespace std;

class Feet {
public:
    int ft;
    int inch;

    Feet(int feet = 0, int inches = 0) : ft(feet), inch(inches) {}

    void display() {
        cout << ft << " ft " << inch << " inch";
    }
};

class Kilometer {
public:
    int km;
    int m;

    Kilometer(int kilometers = 0, int meters = 0) : km(kilometers), m(meters) {}

    void display() {
        cout << km << " km " << m << " m";
    }
};

class Converter {
public:
    static Kilometer convertToKilometer(const Feet &feetObj) {
        double totalInches = feetObj.ft * 12 + feetObj.inch;
        double totalMeters = totalInches * 0.0254; // Convert inches to meters
        double totalKilometers = totalMeters / 1000.0; // Convert meters to kilometers
        int km = static_cast<int>(totalKilometers);
        int m = static_cast<int>((totalKilometers - km) * 1000);
        return Kilometer(km, m);
    }
};

int main() {
    int feet, inch;
    cout << "Enter distance in feet and inches: ";
    cin >> feet >> inch;

    Feet feetObj(feet, inch);
    Kilometer kilometerObj = Converter::convertToKilometer(feetObj);

    cout << "Distance in feet and inches: ";
    feetObj.display();
    cout << "\nConverted distance in kilometers and meters: ";
    kilometerObj.display();

    return 0;
}
