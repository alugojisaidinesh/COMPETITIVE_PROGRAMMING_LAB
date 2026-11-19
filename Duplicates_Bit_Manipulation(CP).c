#include <stdio.h>

int main() {
    char s[1000001];
    int seen = 0, dup = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        int bit = s[i] - 'a';
        if (seen & (1 << bit)) {
            if (!(dup & (1 << bit))) {
                printf("%c ", s[i]);
                dup |= (1 << bit);
            }
        }
        seen |= (1 << bit);
    }
    if (dup == 0)
        printf("No duplicates");
    return 0;
}
Duplicates
