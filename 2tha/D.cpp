#include <bits/stdc++.h>
using namespace std;
class Demo {
   public:
    Demo() {
        cout << "A data 0 is created!" << endl;
        a = 0;
    }
    Demo(int _a) {
        a = _a;
        cout << "A data " << a << " is created!" << endl;
    }
    ~Demo() { cout << "A data " << a << " is erased!" << endl; }
    void show() { cout << "This is data " << a << endl; }
    int a;
};

int main() {
    Demo tmp(10), tmp2;
    int d;
    cin >> d;
    Demo tmp3(d);

    tmp.show();
    tmp2.show();
    tmp3.show();
    return 0;
}
