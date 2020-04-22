#include <bits/stdc++.h>
#define MAX_STR_LEN 105
using namespace std;
int str_cmp(char s1[], char s2[]) {
    int lens1 = 0;
    int lens2 = 0;
    while (s1[lens1] != '\0') {
        lens1++;
    }
    while (s2[lens2] != '\0') {
        lens2++;
    }
    for (int i = 0; i < min(lens1, lens2); i++) {
        if (s1[i] != s2[i] && s1[i] - s2[i] != 32 && s1[i] - s2[i] != -32) {
            return (int)(s1[i] - s2[i]);
        }
    }
    return s1[min(lens1, lens2)] - s2[min(lens1, lens2)];
}
int main() {
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while ((gets(str1) != NULL) && (gets(str2) != NULL))
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
