#include <bits/stdc++.h>
using namespace std;
#define MAX_STR_LEN 105
char *str_cpy(char *t, char *s) {
    char *b = t;
    while (*s != 0) {
        *b++ = *s++;
    }
    *b++='\0';
    return t;
}
int main() {
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while (gets(s) != NULL) {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}