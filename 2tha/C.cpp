#include <bits/stdc++.h>
using namespace std;
class Date {
   public:
    Date(int a, int b, int c) {
        year = a;
        month = b;
        day = c;
    }
    void showDate() {
        cout << setfill('0') << setw(4) << year << "-" << setw(2) << month
             << "-" << setw(2) << day;
    }
    int year, month, day;
};
class Time {
   public:
    Time(int a, int b, int c) {
        hour = a;
        minute = b;
        sec = c;
    }
    void showTime() {
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute
             << ":" << setw(2) << sec;
    }
    int hour, minute, sec;
};
int main() {
    int cases;
    cin >> cases;
    for (int ca = 0; ca < cases; ca++) {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}