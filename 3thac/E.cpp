#include <bits/stdc++.h>
#define MAX_STR_LEN 105
using namespace std;
char* str_cpy(char* t, char* s, int n) {
    char* b = t;
    for (int i = 0; i < n; i++) {
        *b++ = *s++;
        if (*s == '\0') {
            break;
        }
    }
    *b++ ='\0';
    return t;
}
int main() {
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while (scanf("%d", &n) != EOF && getchar()) {
        gets(s);
        p = str_cpy(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}