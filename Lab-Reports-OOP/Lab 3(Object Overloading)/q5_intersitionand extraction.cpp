/*Write a program that overloads insertion and extraction operators.*/
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;

public:
    Person(const string& n = "", int a = 0) : name(n), age(a) {}

    // Overload the insertion operator (<<) for output
    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age;
        return os;
    }

    // Overload the extraction operator (>>) for input
    friend istream& operator>>(istream& is, Person& person) {
        cout << "Enter name: ";
        is >> person.name;
        cout << "Enter age: ";
        is >> person.age;
        return is;
    }
};

int main() {
    Person p1;
    cout << "Enter information for a person:" << endl;
    cin >> p1;

    cout << "You entered: " << p1 << endl;

    return 0;
}
