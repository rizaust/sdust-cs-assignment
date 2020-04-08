#include <bits/stdc++.h>
using namespace std;
class Test {
   private:
    int member;  //此处初始化为0的话OJ会报编译错。

   public:
    Test() {
        member = 0;
        cout << "Test " << member << " is created." << endl;
    }
    Test(int a) {
        member = a;
        cout << "Test " << member << " is created." << endl;
    }
    ~Test() { cout << "Test " << member << " is erased." << endl; }
    void setMem(int a) { member = a; }
    int getMem() { return member; }
};
int main() {
    Test t1;
    int i;
    cin >> i;

    Test t2(i);
    cout << "t2 is " << t2.getMem() << "." << endl;
    cin >> i;
    t2.setMem(i);
    cout << "t2 is " << t2.getMem() << "." << endl;
    return 0;
}
