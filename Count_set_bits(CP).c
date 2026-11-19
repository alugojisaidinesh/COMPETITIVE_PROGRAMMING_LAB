#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned long long n;
    int count=0;
    scanf("%llu",&n);
    while(n>0){
        if(n & 1)
            count++;
        n=n >> 1;
    }
    printf("%d",count);
    return 0;
}
