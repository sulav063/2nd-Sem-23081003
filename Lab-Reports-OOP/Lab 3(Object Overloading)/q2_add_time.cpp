/*Create a class named Time with required data members and member function to display the
time format in HH:MM:SS after adding two time period of object type given by user using
operator overloading concept.(User are allowed to enter any value)*/
#include <iostream>
using namespace std;
class Time {
    public:
        int hh, mm, ss;
        Time(int h, int m, int s) {
            hh = h;
            mm = m;
            ss = s;
        }
        Time operator+(Time t) {
            int s = ss + t.ss;
            int m = mm + t.mm + s / 60;
            s = s % 60;
            int h = hh + t.hh + m / 60;
            m = m % 60;
            h = h % 24;
            return Time(h, m, s);
        }
        void display() {
            cout << hh << ":" << mm << ":" << ss << endl;
        }
};


int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter the first time period (HH MM SS): ";
    cin >> h1 >> m1 >> s1; 
    Time t1(h1, m1, s1);
    cout << "Enter the second time period (HH MM SS): ";
    cin >> h2 >> m2 >> s2;
    Time t2(h2, m2, s2);
    Time t3 = t1 + t2;
    cout << "The sum of the two time periods is: ";
    t3.display();
    return 0;
}
