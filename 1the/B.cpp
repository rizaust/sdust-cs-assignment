#include <bits/stdc++.h>
using namespace std;
class Integer {
   public:
    int n;
    Integer(int a) { n = a; }
    Integer(char* a, int b) {
        int length = strlen(a);
        n = 0;
        int i;
        char _a[100];
        strcpy(_a, a);
        if (_a[0] == '-') {
            for (i = 1; i < length; i++) {
                int num;
                char tmp = _a[i];
                if (tmp >= '0' && tmp <= '9') {
                    num = tmp - '0';
                    n = n * b + num;
                } else if (tmp >= 'a' && tmp <= 'z') {
                    num = tmp - 'a' + 10;
                    n = n * b + num;
                } else if (tmp >= 'A' && tmp <= 'Z') {
                    num = tmp - 'A' + 10;
                    n = n * b + num;
                }
            }
            n = 0 - n;
        } else {
            for (i = 0; i < length; i++) {
                int num;
                char tmp = _a[i];
                if (tmp >= '0' && tmp <= '9') {
                    num = tmp - '0';
                    n = n * b + num;
                } else if (tmp >= 'a' && tmp <= 'z') {
                    num = tmp - 'a' + 10;
                    n = n * b + num;
                } else if (tmp >= 'A' && tmp <= 'Z') {
                    num = tmp - 'A' + 10;
                    n = n * b + num;
                }
            }
        }}
        int getValue(){ return n; }
    };
    int main() {
        char str[100];
        int numOfData, numOfStr;
        int data, i, radix;

        cin >> numOfData;
        for (i = 0; i < numOfData; i++) {
            cin >> data;
            Integer anInteger(data);
            cout << anInteger.getValue() << endl;
        }

        cin >> numOfStr;
        for (i = 0; i < numOfStr; i++) {
            cin >> str >> radix;
            Integer anInteger(str, radix);
            cout << anInteger.getValue() << endl;
        }
        return 0;
    }
