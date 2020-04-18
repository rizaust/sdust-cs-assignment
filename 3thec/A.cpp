#include <bits/stdc++.h>
using namespace std;
class MyString {
   public:
    string c;
    void input() { cin >> c; }
    void output() {
        int isreverse = 1;
        for (int i = 0; i < c.length(); i++) {
            if (c[i] != c[c.length() - i - 1]) {
                isreverse = 0;
                break;
            }
        }
        if (isreverse) {
            cout << c.substr(0, (c.length() + 1) / 2) << endl;
        } else {
            cout << c << endl;
        }
    }
};
int main() {
    MyString str;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        str.input();
        str.output();
    }
    return 0;
}
