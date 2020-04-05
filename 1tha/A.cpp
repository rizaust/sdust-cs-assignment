#include <bits/stdc++.h>
using namespace std;
class Time {
   private:
   int hours,minutes,seconds;
   public:
   int hour(){
       return hours;
   }
   int minute(){
       return minutes;
   }
   int second(){
       return seconds;
   }
   void hour(int a){
       hours=a;
   }
   void minute(int a){
       minutes=a;
   }
   void second(int a){
       seconds=a;
   }
}; 
int main() {
    Time t;
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; ++i) {
        int hour, minute, second;
        cin >> hour >> minute >> second;
        t.hour(hour);
        t.minute(minute);
        t.second(second);
        cout << setw(2) << setfill('0') << t.hour() << ":";
        cout << setw(2) << setfill('0') << t.minute() << ":";
        cout << setw(2) << setfill('0') << t.second() << endl;
    }
}
