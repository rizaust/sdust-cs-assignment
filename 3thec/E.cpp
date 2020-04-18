#include <bits/stdc++.h>
using namespace std;
class Data {
   public:
    Data(double d) { data = d; }
    double getValue() { return data; }
    void showValue() { cout << data; }
    double data;
};
int main() {
    double d;
    cin >> d;
    Data data(d);
    cout << data.getValue() << endl;
    data.showValue();
}
