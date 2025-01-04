/*WAP to demonstrate manipulators like setw, setprecision, setfill*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num1;
    double num2;

    // User input
    cout << "Enter an integer number: ";
    cin >> num1;

    cout << "Enter a floating-point number: ";
    cin >> num2;

    // setw example
    cout << "Using setw:\n";
    cout << setw(5) << num1 << endl;
    cout << setw(5) << num2 << endl;

    // setprecision example
    cout << "\nUsing setprecision:\n";
    cout << setprecision(3) << num2 << endl;

    // setfill example
    cout << "\nUsing setfill:\n";
    cout << setfill('*') << setw(5) << num1 << endl;
	cout << setfill('*') << setw(5) << num2 << endl;
    return 0;
}

