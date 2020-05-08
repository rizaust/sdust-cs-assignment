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
    int showTime() {
        if (h >= 24 || h < 0 || m >= 60 || m < 0 || s >= 60 || s < 0) {
            cout << "Time error" << endl;
            return 0;
        }
        cout << setfill('0') << setw(2) << h << ':' << setw(2) << m << ':'
             << setw(2) << s << endl;
    }
    int hour() { return h; }
    int minute() { return m; }
    int second() { return s; }
    int hour(int hh) { h = hh; }
    int minute(int mm) { m = mm; }
    int second(int ss) { s = ss; }
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
    Time& getTime() { return *this; }
    Time& inputTime() {
        int hh, mm, ss;
        cin >> hh >> mm >> ss;
        h = hh;
        m = mm;
        s = ss;
        return *this;
    }
};

int main() {
    Time t;
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        if (i % 4 == 0) {
            int hour, minute, second;
            cin >> hour >> minute >> second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if (i % 4 == 1) {
            int hour, minute, second;
            cin >> hour >> minute >> second;
            t.setTime(hour, minute, second).showTime();
        }
        if (i % 4 == 2) t.inputTime().showTime();
        if (i % 4 == 3) {
            int hour, minute, second;
            cin >> hour >> minute >> second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}
