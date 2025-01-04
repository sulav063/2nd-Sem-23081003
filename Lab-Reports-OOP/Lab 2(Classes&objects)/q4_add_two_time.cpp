/*Create a class named time with required data members and member functions to display the
time format in HHH:MM:SS after adding two time period given by user.*/
#include <iostream>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    
    public:
        void getTime() {
            cout << "Enter the time period (hours minutes seconds): ";
            cin >> hours >> minutes >> seconds;
        }
        
        void displayTime() {
            cout << "Time format (HHH:MM:SS): ";
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        
        void addTime(const Time& t1, const Time& t2) {
            seconds = t1.seconds + t2.seconds;
            minutes = t1.minutes + t2.minutes + (seconds / 60);
            hours = t1.hours + t2.hours + (minutes / 60);
            minutes %= 60;
            seconds %= 60;
        }
};

int main() {
    Time time1, time2, result;
    
    cout << "Enter the first time period:" << endl;
    time1.getTime();
    
    cout << "Enter the second time period:" << endl;
    time2.getTime();
    
    result.addTime(time1, time2);
    
    cout << "After adding both time periods:" << endl;
    result.displayTime();
    
    return 0;
}
