/*Create a person class with attributes id and name and member function to set the member
variables and to display those variables. Then create class student with member variables grade
and address which inherits person class publicly.*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string id;
    string name;

    void setDetails()
    {
        cout << "Enter ID: ";
        getline(cin, id);
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayDetails()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    string grade;
    string address;

    void setStudentDetails()
    {
        setDetails();
        cout << "Enter Grade: ";
        getline(cin, grade);
        cout << "Enter Address: ";
        getline(cin, address);
    }

    void displayStudentDetails()
    {
        displayDetails();
        cout << "Grade: " << grade << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Student student;
    cout << "Enter Student Information:" << endl;
    student.setStudentDetails();

    cout << "\nStudent Details:" << endl;
    student.displayStudentDetails();

    return 0;
}
