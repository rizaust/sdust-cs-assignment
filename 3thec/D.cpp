#include <bits/stdc++.h>
using namespace std;
class Computer {
   public:
    static int cnt;
    string name;
    static int getCnt() { return cnt; }
    Computer(string str) {
        name = str;
        cnt++;
    }
    Computer(const Computer& oriComputer);
    Computer setName(char* c) {
        name = c;
        return *this;
    }
    void print() { cout << name << endl; }
    ~Computer(){
        cnt--;
    }
};
Computer::Computer(const Computer& oriComputer) {
    name = oriComputer.name;
    cnt++;
}
int Computer::cnt = 0;
int main() {
    char str[101];
    cout << "1:" << Computer::getCnt() << " computers." << endl;
    Computer com1("Tom"), com2(com1);
    cout << "2:" << com2.getCnt() << " computer." << endl;
    cin >> str;
    com2.setName(str).print();
    com2.print();
    cout << "3:" << com2.getCnt() << " computer." << endl;
    return 0;
}