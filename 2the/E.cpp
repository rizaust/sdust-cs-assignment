#include <iostream>
using namespace std;
class Fract {
   public:
    Fract(int z, int _b) {
        c = 1;
        if (z * _b < 0) c = -1;
        if (z < 0) z = -z;
        if (_b < 0) _b = -_b;
        a = z;
        b = _b;
    }
    void show() {
        int z = b;
        int _a = a;
        int _b = b;
        while (_a % _b != 0) {
            z = _a % _b;
            _a = _b;
            _b = z;
        }
        a = a / z;
        b = b / z;
        if (a == 0)
            cout << "0" << endl;
        else if (b == 1) {
            if (c == -1) cout << "-";
            cout << a << endl;
        } else {
            if (c == -1) cout << "-";
            cout << a << "/" << b << endl;
        }
    }
    int a, b, c;
};

#include <cstdio>
int main() {
    int n, m;
    while (cin >> n >> m) {
        Fract fr(n, m);
        fr.show();
    }
}
