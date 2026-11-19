#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long A,B;
    scanf("%lld %lld",&A,&B);
    long long a=A;
    long long b=B;
    long long x=1,y=0;
    long long x2=0,y2=1;
    while(b!=0)
    {
        long long q=a/b;
        long long temp;
        temp=a;
        a=b;
        b=temp-q*b;
        temp=x;
        x=x2;
        x2=temp-q*x2;
        temp=y;
        y=y2;
        y2=temp-q*y2;
    }
    long long D=a;
    printf("%lld %lld %lld",x,y,D);   
    return 0;
}
