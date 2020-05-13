#include <bits/stdc++.h>
using namespace std;
class Date {
   public:
    int year;
    int month;
    int day;
    Date() { year, month, day = 1, 1, 1; }
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
};
class Time {
   public:
    int hour;
    int minute;
    int second;
    Time() { hour, minute, second = 1, 1, 1; }
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
};
class DateTime {
   public:
    Date date;
    Time time;
    DateTime(){}
    DateTime(const Date& _date, const Time& _time) {
        date.day = _date.day;
        date.month = _date.month;
        date.year = _date.year;
        time.hour = _time.hour;
        time.minute = _time.minute;
        time.second = _time.second;
    }
    DateTime(int a, int b, int c, int d, int e, int f) {
        date.day = c;
        date.month = b;
        date.year = a;
        time.hour = d;
        time.minute = e;
        time.second = f;
    }
    DateTime& setDateTime(int a, int b, int c, int d, int e, int f) {
        date.day = c;
        date.month = b;
        date.year = a;
        time.hour = d;
        time.minute = e;
        time.second = f;
        return *this;
    }
    void showDateTime() {
        cout << setfill('0') << setw(4) << date.year << "-" << setw(2)
             << date.month << "-" << setw(2) << date.day << " " << setw(2)
             << time.hour << ":" << setw(2) << time.minute << ":" << setw(2)
             << time.second;
    }
};

int main() {
    Date date(1000, 10, 10);
    Time time(1, 1, 1);
    DateTime date_time(date, time);
    date_time.showDateTime();
    cout << endl;
    int cases, flag = 0;
    cin >> cases;
    for (int ca = 0; ca < cases; ca++) {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        if (flag == 0) {
            flag = 1;
            DateTime dt(year, month, day, hour, minute, second);
            dt.showDateTime();
        } else if (flag == 1) {
            flag == 0;
            date_time.setDateTime(year, month, day, hour, minute, second)
                .showDateTime();
        }
        cout << endl;
    }
}