#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int A, B;
    scanf("%d %d", &A, &B);
    while (B != 0) {
        int carry = A & B;
        A = A ^ B;
        B = carry << 1;
    }
    printf("%d", A);  
    return 0;
}
