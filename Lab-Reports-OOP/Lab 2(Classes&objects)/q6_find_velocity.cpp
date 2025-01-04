/*WAP to find velocity (v=d/t) using friend class.*/
#include <iostream>
using namespace std;

class Time;

class Distance {
    private:
    int distance;

    public:
        Distance(int d) {
        distance = d;
    }

    friend float velocity(Distance d, Time t);
};

class Time {
    private:
    int time;

    public:
        Time(int t) {
        time = t;
    }

    friend float velocity(Distance d, Time t);
};

float velocity(Distance d, Time t) {
    float v = (float)d.distance / (float)t.time;
    return v;
}

int main() {
    Distance d(100);
    Time t(10);
    cout << "Velocity: " << velocity(d, t) << endl;
    return 0;
}
