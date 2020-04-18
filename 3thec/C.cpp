#include <bits/stdc++.h>
using namespace std;
class Time {
   public:
    Time(int a, int b, int c) {
        hour = a;
        minute = b;
        second = c;
    }
    void showTime() {
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute
             << ":" << setw(2) << second << endl;
    }
    int hour, minute, second;
};
int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time t(hour, minute, second);
        t.showTime();
    }
}