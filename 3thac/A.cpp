#include <bits/stdc++.h>
using namespace std;
class Data {
   public:
    double data;
    Data() {
        data = 0;
        cout << "Initialize a data " << data << endl;
    }
    Data(double d) {
        data = d;
        cout << "Initialize a data " << data << endl;
    }
    double getValue() { return data; }
    void showValue() { cout << data; }
};
int main() {
    Data data1;
    double d;
    cin >> d;
    Data data(d);
    cout << data.getValue() << endl;
    data.showValue();
}