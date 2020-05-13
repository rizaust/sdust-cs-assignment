#include <bits/stdc++.h>
using namespace std;

class Date {
   public:
    Date(int a = 1, int b = 1, int c = 1) : year(a), month(b), day(c) {
        cout << "CREATE Date : (" << year << ", " << month << ", " << day << ")"
             << endl;
    }
    Date(const Date &p) {
        year = p.year;
        month = p.month;
        day = p.day;
        cout << "COPY   Date : (" << year << ", " << month << ", " << day << ")"
             << endl;
    }
    void setDate(int a, int b, int c) {
        year = a;
        month = b;
        day = c;
    }
    void showDate() {
        cout << setw(4) << setfill('0') << year << "-" << setw(2)
             << setfill('0') << month << "-" << setw(2) << setfill('0') << day;
    }
    int getY() const { return year; }
    int getM() const { return month; }
    int getD() const { return day; }
    void setY(int _y) { year = _y; }
    void setM(int _m) { month = _m; }
    void setD(int _d) { day = _d; }

   private:
    int year, month, day;
};
class Time {
   public:
    Time(int a = 0, int b = 0, int c = 0) : h(a), m(b), s(c) {
        cout << "CREATE Time : (" << h << ", " << m << ", " << s << ")" << endl;
    }
    Time(const Time &p) {
        h = p.h;
        m = p.m;
        s = p.s;
        cout << "COPY   Time : (" << h << ", " << m << ", " << s << ")" << endl;
    }
    void setTime(int a, int b, int c) {
        h = a;
        m = b;
        s = c;
    }
    void showTime() {
        cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0')
             << m << ":" << setw(2) << setfill('0') << s;
    }
    int getH() const { return h; }
    int getM() const { return m; }
    int getS() const { return s; }
    void setH(int _h) { h = _h; }
    void setM(int _m) { m = _m; }
    void setS(int _s) { s = _s; }

   private:
    int h, m, s;
};
class DateTime {
   public:
    int const year() const { return date.getY(); }
    int const month() const { return date.getM(); }
    int const day() const { return date.getD(); }
    int const hour() const { return time.getH(); }
    int const minute() const { return time.getM(); }
    int const second() const { return time.getS(); }
    int year(int a) { date.setY(a); }
    int month(int a) { date.setM(a); }
    int day(int a) { date.setD(a); }
    int hour(int a) { time.setH(a); }
    int minute(int a) { time.setM(a); }
    int second(int a) { time.setS(a); }
    DateTime() : date(1, 1, 1), time(0, 0, 0) {
        cout << "CREATE DateTime : (" << date.getY() << ", " << date.getM()
             << ", " << date.getD() << ") (" << time.getH() << ", "
             << time.getM() << ", " << time.getS() << ")" << endl;
    }
    DateTime(int a, int b, int c, int d, int e, int f)
        : date(a, b, c), time(d, e, f) {
        cout << "CREATE DateTime : (" << date.getY() << ", " << date.getM()
             << ", " << date.getD() << ") (" << time.getH() << ", "
             << time.getM() << ", " << time.getS() << ")" << endl;
    }
    DateTime(const Date &p1, const Time &p2) : time(p2), date(p1) {
        cout << "CREATE DateTime : (" << date.getY() << ", " << date.getM()
             << ", " << date.getD() << ") (" << time.getH() << ", "
             << time.getM() << ", " << time.getS() << ")" << endl;
    }
    DateTime(const DateTime &p) : time(p.time), date(p.date) {
        cout << "COPY   DateTime : (" << date.getY() << ", " << date.getM()
             << ", " << date.getD() << ") (" << time.getH() << ", "
             << time.getM() << ", " << time.getS() << ")" << endl;
    }
    DateTime setDateTime(int a, int b, int c, int d, int e, int f) {
        date.setY(a);
        date.setM(b);
        date.setD(c);
        time.setH(d);
        time.setM(e);
        time.setS(f);
        return *this;
    }
    void showDateTime() {
        cout << setw(4) << setfill('0') << date.getY() << "-" << setw(2)
             << setfill('0') << date.getM() << "-" << setw(2) << setfill('0')
             << date.getD() << " " << setw(2) << setfill('0') << time.getH()
             << ":" << setw(2) << setfill('0') << time.getM() << ":" << setw(2)
             << setfill('0') << time.getS();
    }

   private:
    Time time;
    Date date;
};
int main() {
    const Date date(1000, 10, 10), dt(date);
    const Time time(1, 1, 1), tm(time);
    DateTime date_time(dt, tm);
    const DateTime cnt(date_time);
    cout << "DateTime : " << cnt.year() << " " << cnt.month() << " "
         << cnt.day();
    cout << " " << cnt.hour() << " " << cnt.minute() << " " << cnt.second();
    cout << endl;
    int cases;
    cin >> cases;
    for (int ca = 0; ca < cases; ca++) {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.year(year);
        date_time.month(month);
        date_time.day(day);
        date_time.hour(hour);
        date_time.minute(minute);
        date_time.second(second);
        date_time.showDateTime();
        cout << endl;
    }
}