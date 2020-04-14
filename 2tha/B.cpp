#include <bits/stdc++.h>
using namespace std;
class Equation {
   public:
    double a, b, c;
    double ans1, ans2;
    Equation(double _a, double _b, double _c) {
        a = _a;
        b = _b;
        c = _c;
    }
    void solve() {
        ans1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
        ans2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
    }
    void printRoot() {
        ans1 > ans2
            ? cout << fixed << setprecision(2) << ans1 << " " << ans2 << endl
            : cout << fixed << setprecision(2) << ans2 << " " << ans1 << endl;
    }
};
int main() {
    double a, b, c;
    while (cin >> a >> b >> c) {
        Equation equ(a, b, c);
        equ.solve();
        equ.printRoot();
    }
    return 0;
}