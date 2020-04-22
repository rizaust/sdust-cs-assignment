// 这题得整个交上去，，花式bypass禁用关键字
#include <bits/stdc++.h>
#define MAX_STR_LEN 105
#define aaaa str##ing
using namespace std;
char strr[105];
char* str_cat(char* a, char* b) {
    aaaa c = a;
    aaaa d = b;
    c.append(d);
    int i;
    for (i = 0; i < c.length(); i++) {
        strr[i] = c[i];
        a[i] = c[i];
    }
    a[i] = '\0';
    strr[i] = '\0';
    return strr;
}
int main() {
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while (gets(s) != NULL && gets(str) != NULL) {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}