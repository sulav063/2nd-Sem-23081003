#include<iostream>
using namespace std;
#define PI 3.14159
int main() {
    double radius;
    float area,circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    cout << "The area is: " ;
	cout<< area << endl;
    cout << "The circumference is: ";
	cout<< circumference << endl;
	     return 0;
}

