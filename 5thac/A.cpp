#include <bits/stdc++.h>
using namespace std;
class CPU {
   public:
    int freq;
    CPU(int f = 0) { freq = f; }
};
class Memory {
   public:
    int mem;
    Memory(int _mem = 0) { mem = _mem; }
};
class Computer {
   public:
    string name;
    CPU cpu;
    Memory memory;
    Computer(int c, int m, string n) : cpu(c), memory(m), name(n) {}
    Computer(CPU c, Memory m, string n) {
        cpu = c;
        memory = m;
        name = n;
    }
    void show() {
        cout << "This is " << name << "' computer with CPU = " << cpu.freq
             << "GHz, memory = " << memory.mem << "MB." << endl;
    }
};
int main() {
    int c, m;
    string n;
    cin >> c >> m >> n;
    CPU cpu(c);
    Memory mem(m);
    Computer com1(cpu, mem, n);
    cin >> c >> m >> n;
    Computer com2(c, m, n);
    com1.show();
    com2.show();
    return 0;
}
