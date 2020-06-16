#include <bits/stdc++.h>
using namespace std;
class Time {
   public:
    int second;
    int isCorrect;
    Time() {
        second = 0;
    }
    Time(const Time& another) {
        second = another.second;
        isCorrect = another.isCorrect;
    }
    Time inputTime() {
        int hour, minute, sec;
        cin >> hour >> minute >> sec;
        if (hour > 23 || minute > 59 || sec > 59 ||hour<0||minute<0||sec<0) {
            isCorrect = 0;
        } else {
            isCorrect = 1;
        }
        second = 3600 * hour + 60 * minute + sec;
        return *this;
    }
    void showTime() {
        while (second < 0) {
            second += 86400;
        }

        if (isCorrect) {
            second = second % 86400;
            cout << setfill('0') << setw(2) << second / 3600 << ":";
            second %= 3600;
            cout << setfill('0') << setw(2) << second / 60 << ":";
            second %= 60;
            cout << setfill('0') << setw(2) << second;
            cout << endl;
        } else {
            cout << "Time error" << endl;
        }
    }
    Time operator+=(int a) {
        this->second += a;
        return *this;
    }
    Time operator-=(int a) {
        this->second -= a;
        return *this;
    }
};
int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        Time t;
        t.inputTime();
        Time tt(t);
        int num;
        cin >> num;
        t += num;
        t.showTime();
        tt -= num;
        tt.showTime();
    }
}