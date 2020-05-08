#include <bits/stdc++.h>
using namespace std;

class Pear {
   public:
    Pear() {
        w = 0;
        cout << "0kg pear is created." << endl;
    }
    Pear(int ww) {
        w = ww;
        cout << w << "kg pear is created." << endl;
    }
    ~Pear() { cout << w << "kg pear is erased." << endl; }
    Pear(const Pear& p) {
        w = p.w;
        cout << w << "kg pear is copied." << endl;
    }
    void weight(int ww) { w = ww; }
    int weight() { return w; }

   private:
    int w;
};

int main() {
    double w;
    cin >> w;
    Pear pe(w), pea, pear(pe);
    cin >> w;
    pear.weight(w);
    cout << pear.weight() << endl;
}
