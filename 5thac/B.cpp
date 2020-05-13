#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
class Time {
   public:
    Time(int _h = 0, int _m = 0, int _s = 0) {
        h = _h;
        m = _m;
        s = _s;
        cout << "Time " << h << ":" << m << ":" << s << " is created." << endl;
    }
    ~Time() {
        cout << "Time " << h << ":" << m << ":" << s << " is erased." << endl;
    }
    int geth() { return h; }
    int getm() { return m; }
    int gets() { return s; }

   private:
    int h, m, s;
};
class Alarm {
   public:
    Alarm(int _h, int _m, int _s, string _th) : t(_h, _m, _s), th(_th) {
        cout << "Alarm " << th << " is created." << endl;
    }
    ~Alarm() { cout << "Alarm " << th << " is erased." << endl; }
    string getThing() { return th; }
    int remainSeconds(Time& now) {
        return (t.geth() - now.geth()) * 3600 + (t.getm() - now.getm()) * 60 +
               (t.gets() - now.gets());
    }

   private:
    string th;
    Time t;
};
int main() {
    int h, m, s;
    string th;
    cin >> th;
    cin >> h >> m >> s;
    Alarm alarm(h, m, s, th);
    cin >> h >> m >> s;
    Time now(h, m, s);
    cout << "Alarm " << alarm.getThing() << " will start after "
         << alarm.remainSeconds(now) << " seconds." << endl;
    return 0;
}