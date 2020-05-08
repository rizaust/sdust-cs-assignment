#include <iomanip>
#include <iostream>
using namespace std;
class Time {
   public:
    int h, m, s;
    Time(int hh = 0, int mm = 0, int ss = 0) {
        h = hh;
        m = mm;
        s = ss;
    }
    Time(const Time& t) {
        h = t.h;
        m = t.m;
        s = t.s;
        cout << "There was a call to the copy constructor : " << h << "," << m
             << "," << s << endl;
    }
    void showTime() {
        cout << setfill('0') << setw(2) << h << ':' << setw(2) << m << ':'
             << setw(2) << s << endl;
    }
    Time& setTime(int hh, int mm, int ss) {
        h = hh;
        m = mm;
        s = ss;
        return *this;
    }
    Time& setTime(const Time& t) {
        h = t.h;
        m = t.m;
        s = t.s;
        return *this;
    }
    Time& getTime() {
        goto here;
    here:
        return *this;
    }
};

int main() {
    cout << "Copy constructor test output :" << endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout << "\nTest data output :" << endl;

    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        if (i % 2 == 0) {
            int hour, minute, second;
            cin >> hour >> minute >> second;
            t.setTime(hour, minute, second).showTime();
        }
        if (i % 2 == 1) {
            int hour, minute, second;
            cin >> hour >> minute >> second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}
