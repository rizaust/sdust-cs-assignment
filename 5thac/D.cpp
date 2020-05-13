#include <bits/stdc++.h>
using namespace std;

class Date {
   private:
    friend class DateTime;
    int year, month, day;

   public:
    Date() : year(1), month(1), day(1) {
        cout << "CREATE Date : (" << year << ", " << month << ", " << day << ")"
             << endl;
    }
    Date(int a, int b, int c) : year(a), month(b), day(c) {
        cout << "CREATE Date : (" << year << ", " << month << ", " << day << ")"
             << endl;
    }
    Date &setDate(int a, int b, int c) {
        year = a;
        month = b;
        day = c;
        return *this;
    }
    void showDate() {
        cout << setfill('0') << setw(4) << year << "-" << setfill('0')
             << setw(2) << month << "-" << setfill('0') << setw(2) << day
             << " ";
    }
};
class Time {
   private:
    friend class DateTime;
    int hhour, mminute, ssecond;

   public:
    Time() : hhour(0), mminute(0), ssecond(0) {
        cout << "CREATE Time : (" << hhour << ", " << mminute << ", " << ssecond
             << ")" << endl;
    }
    Time(int a, int b, int c) : hhour(a), mminute(b), ssecond(c) {
        cout << "CREATE Time : (" << hhour << ", " << mminute << ", " << ssecond
             << ")" << endl;
    }
    Time &setTime(int a, int b, int c) {
        hhour = a;
        mminute = b;
        ssecond = c;
        return *this;
    }
    void showTime() {
        cout << setw(2) << setfill('0') << hhour << ":" << setw(2)
             << setfill('0') << mminute << ":" << setw(2) << setfill('0')
             << ssecond;
    }
};
class DateTime {
   private:
    Time T;
    Date D;

   public:
    DateTime() : T(0, 0, 0), D(1, 1, 1) {
        cout << "CREATE DateTime : (" << D.year << ", " << D.month << ", "
             << D.day << ", " << T.hhour << ", " << T.mminute << ", "
             << T.ssecond << ")" << endl;
    }
    DateTime(const Date &d, const Time &t) : D(d), T(t) {
        cout << "CREATE DateTime : (" << D.year << ", " << D.month << ", "
             << D.day << ", " << T.hhour << ", " << T.mminute << ", "
             << T.ssecond << ")" << endl;
    }
    DateTime(int a, int b, int c, int d, int e, int f)
        : D(a, b, c), T(d, e, f) {}
    void showDateTime() {
        D.showDate();
        T.showTime();
    }
    DateTime &setDateTime(int a, int b, int c, int d, int e, int f) {
        D.setDate(a, b, c);
        T.setTime(d, e, f);
        return *this;
    }
};
int main() {
    DateTime date_time;
    date_time.showDateTime();
    cout << endl;
    int cases;
    cin >> cases;
    for (int ca = 0; ca < cases; ca++) {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.setDateTime(year, month, day, hour, minute, second);
        date_time.showDateTime();
        cout << endl;
    }
}
