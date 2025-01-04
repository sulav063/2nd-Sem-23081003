/*Create a class temperature with the member function getdata() and display() with required
data to changed the temperature given in farenheit to celsius.*/
#include <iostream>
using namespace std;

class Temperature {
    private:
        float fahrenheit;
        float celsius;
    
    public:
        void getData() {
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> fahrenheit;
        }
        
        void display() {
            celsius = (fahrenheit - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << celsius << "C" << endl;
        }
};

int main() {
    Temperature temp;
    
    temp.getData();
    temp.display();
    
    return 0;
}
