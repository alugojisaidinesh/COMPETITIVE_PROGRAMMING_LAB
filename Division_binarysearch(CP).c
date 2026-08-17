#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dividend, divisor;
    scanf("%d", &dividend);
    scanf("%d", &divisor);
    int sign = 1;
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        sign = -1;
    if (dividend < 0)
        dividend = -dividend;
    if (divisor < 0)
        divisor = -divisor;
    int quotient = 0;
    while (dividend >= divisor) {
        dividend = dividend - divisor;
        quotient++;
    }
    printf("%d", quotient);   
    return 0;
}
