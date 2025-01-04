/*Write a program to read two numbers from the use and display the largest value on the screen.(
create class Largest with require data-member and member-function to read from user and to
display result.*/
#include <iostream>
using namespace std;

class Largest {
    private:
        int number1, number2;
    
    public:
        void readNumbers() {
            cout << "Enter the first number: ";
            cin >> number1;
            
            cout << "Enter the second number: ";
            cin >> number2;
        }
        
        void displayLargest() {
            if (number1 > number2)
                cout << "The largest number is: " << number1 << endl;
            else if (number2 > number1)
                cout << "The largest number is: " << number2 << endl;
            else
                cout << "Both numbers are equal." << endl;
        }
};

int main() {
    Largest largestObj;
    
    largestObj.readNumbers();
    largestObj.displayLargest();
    
    return 0;
}
