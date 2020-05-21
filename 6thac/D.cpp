#include <bits/stdc++.h>
using namespace std;
class Base {
   public:
    Base(int _x = 0) : x(_x) {
        cout << "Base = " << x << " is created." << endl;
    }
    Base(const Base &b) : x(b.x) {
        cout << "Base = " << x << " is copied." << endl;
    }
    ~Base() { cout << "Base = " << x << " is erased." << endl; }

   private:
    int x;
};
class Derived : public Base {
   public:
    Derived(int _x, int _y) : Base(_x), y(_y) {
        cout << "Derived = " << y << " is created." << endl;
    }
    Derived(const Derived &d) : Base(d), y(d.y) {
        cout << "Derived = " << y << " is copied." << endl;
    }
    ~Derived() { cout << "Derived = " << y << " is erased." << endl; }

   private:
    int y;
};
int main() {
    int cases, data1, data2;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> data1 >> data2;
        Base base1(data1), base2(base1);

        Derived derived1(data1, data2), derived2(derived1);
    }
}