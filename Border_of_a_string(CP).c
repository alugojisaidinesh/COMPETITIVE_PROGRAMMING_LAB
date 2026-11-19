#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char s[100001];   
    scanf("%s", s);
    int n = strlen(s);
    for (int len = n - 1; len >= 1; len--) {
        int found = 1;
        for (int i = 0; i < len; i++) {
            if (s[i] != s[n - len + i]) {
                found = 0;
                break;
            }
        }
        if (found) {
            for (int i = 0; i < len; i++) {
                printf("%c", s[i]);
            }
            return 0;
        }
    }
    return 0;
}
