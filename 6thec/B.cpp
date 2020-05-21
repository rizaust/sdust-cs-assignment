#include <bits/stdc++.h>
using namespace std;

class STR {
   private:
    char *p;
    int len;

   public:
    STR() {
        len = 0;
        p = NULL;
    }
    STR(const char *s) {
        int i, j;
        for (i = 0; s[i] != '\0'; i++) {
        }
        len = i;
        p = new char[len + 1];
        for (j = 0; j < len; j++) {
            p[j] = s[j];
        }
        p[len] = '\0';
    }
    int length() { return len; }
    void putline() {
        if (len != 0) {
            puts(p);
        } else
            cout << endl;
    }
};
int main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}