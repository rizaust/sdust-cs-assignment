#include <bits/stdc++.h>
using namespace std;
class CharGraph {
   public:
    int stacksNum;
    char c;
    CharGraph(int n, char _c) {
        c = _c;
        stacksNum = n;
    }
    void print() {
        if (stacksNum == 0) {
            cout << endl;
        } else if (stacksNum > 0) {
            for (int i = 1; i <= stacksNum; i++) {
                for (int j = 0; j < i; j++) {
                    cout << c;
                }
                cout << endl;
            }
        } else {
            for (int i = -stacksNum; i >= 1; i--) {
                for (int j = i; j >= 1; j--) {
                    cout << c;
                }
                cout << endl;
            }
        }
    }
};

int main() {
    int cases, n;
    char c;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> n >> c;
        CharGraph cGraph(n, c);
        cGraph.print();
    }
    return 0;
}