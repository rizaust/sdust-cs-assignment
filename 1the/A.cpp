#include <bits/stdc++.h>
using namespace std;
class Data {
   public:
    double data;
    void init(double d) { data = d; }
    double getValue() { return data; }
    void showValue() { cout << data; }
};
int main() {
    Data data;
    double d;
    cin >> d;
    data.init(d);
    cout << data.getValue() << endl;
    data.showValue();
}