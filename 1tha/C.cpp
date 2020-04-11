#include <bits/stdc++.h>
using namespace std;
class Equation {
   public:
    void setArgs(int a[], int n) {
        for (int i = 0; i < n + 1; i++) {
            para[i] = a[i];
        }
        amount = n + 1;
    }
    void print() {
        int flag = 1;
        for (int i = 0; i < amount; i++) {
            if (para[i] == 0) {
                continue;
            }
            if (flag) {
                flag = 0;
            } else
                cout << "+";
            if (amount - i == 2) {
                if (para[i] == 1)
                    cout << "x";
                else
                    cout << para[i] << "x";
            } else if (amount - i == 1) {
                cout << para[i];
            } else {
                if (para[i] == 1)
                    cout << "x^" << amount - i - 1;
                else
                    cout << para[i] << "x^" << amount - i - 1;
            }
        }
        cout << endl;
    }
    double getValue(double x) { 
        double ans;
        for(int i=0;i<amount;i++){
            ans+=para[i]*pow(x,amount - i - 1);
        }
        return ans;
    }
    int para[1000];
    int amount;
};
int main() {
    int i, j, n, m, *a;
    double x;
    cin >> n;
    for (i = 0; i < n; i++) {
        Equation eq;
        cin >> m;
        a = new int[m + 1];
        for (j = 0; j <= m; j++) cin >> a[j];
        eq.setArgs(a, m);
        eq.print();
        cin >> x;
        cout << eq.getValue(x) << endl;
        delete[] a;
    }
    return 0;
}
