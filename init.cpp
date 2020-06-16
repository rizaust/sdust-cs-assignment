#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        map<string, int> mymap;
        map<string, int>::iterator p;
        for (int i = 0; i < n; i++) {
            string name;
            int num;
            cin >> name >> num;
            mymap[name] += num;
        }
        for (p = mymap.begin(); p != mymap.end(); p++) {
            cout << p->first << ":" << p->second << endl;
        }
    }
    return 0;
}
