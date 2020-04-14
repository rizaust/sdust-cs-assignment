#include <bits/stdc++.h>
using namespace std;
class SpecialPrime {
   public:
    static bool judge(int value);
};
bool SpecialPrime::judge(int value) {
    if (value == 2) return true;
    for (int i = 2; i < sqrt(value) + 1; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    string a;
    stringstream res;
    res << value;
    res >> a;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != a[a.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int m, n, i;
    cin >> m >> n;
    for (i = m; i < n; i++) {
        if (SpecialPrime::judge(i)) cout << i << endl;
    }
    return 0;
}