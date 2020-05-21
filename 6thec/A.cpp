#include <bits/stdc++.h>
using namespace std;
class MyList {
   public:
   MyList(int l) : len(l), curLen(0) { elements = new int[len]; }
    void append(int d) {
        elements[curLen] = d;
        curLen++;
    }
    void insert(int p, int d) {
        for (int i = curLen; i >= p; i--) elements[i + 1] = elements[i];
        curLen++;
        elements[p] = d;
    }
    void erase(int p) {
        for (int i = p; i < curLen; i++) elements[i] = elements[i + 1];
        curLen--;
    }
    void set(int p, int d) { elements[p] = d; }
    void show() {
        for (int i = 0; i < curLen; i++) {
            if (i == 0)
                cout << elements[i];
            else
                cout << " " << elements[i];
        }
        cout << endl;
    }
   private:
    int len;
    int *elements;
    int curLen;
};
int main() {
    int cases, len, data, pos;
    char op;
    cin >> len;
    MyList myList(len);
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> op;
        switch (op) {
            case 'A':
                cin >> data;
                myList.append(data);
                break;
            case 'I':
                cin >> pos >> data;
                myList.insert(pos, data);
                break;
            case 'E':
                cin >> pos;
                myList.erase(pos);
                break;
            case 'S':
                cin >> pos >> data;
                myList.set(pos, data);
        }
        myList.show();
    }
    return 0;
}