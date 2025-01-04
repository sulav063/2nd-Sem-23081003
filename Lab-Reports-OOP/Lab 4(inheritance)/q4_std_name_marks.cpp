/*Qno4:4. Write a program as specified below:
a) Design a class Student with data member name and roll_no and two member function to
read and display data.
b) Design a class Subject that inherits the class Student, consists its own data member to store
marks in five subjects, two function to read and display marks.
c) Design a third class that inherits class Subject, consists of function to display student name,
total marks and percentage of marks.*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int roll_no;

public:
    void readDataNR()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Roll No : ";
        cin >> roll_no;
    }
    void displayDataNR()
    {
        cout << "Name is : " << name;
        cout << "Roll No is : " << roll_no;
    }
};
class Subject : public Student
{
protected:
    int s[5];

public:
    void readDataS()
    {
        for (int i; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << ": ";
            cin >> s[i];
        }
    }
    void displayDataS()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks in subject " << i + 1 << " is " << s[i] << endl;
        }
    }
};
class FinalClass : public Subject
{
private:
    int totalMarks;
    float percentage;

public:
    void displayName()
    {
        cout << "Name is : " << name << endl;
    }
    void displayTotalMarks()
    {
        totalMarks = s[0] + s[1] + s[2] + s[3] + s[4];
        cout << "Total marks is : " << totalMarks << endl;
    }
    void displayPercentage()
    {
        percentage = (totalMarks / 300.0) * 100;
        cout << "Percentage is : " << percentage << endl;
    }
};
int main()
{
    FinalClass fc1;
    fc1.readDataNR();
    fc1.readDataS();
    fc1.displayName();
    fc1.displayTotalMarks();
    fc1.displayPercentage();
    return 0;
}
