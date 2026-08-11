#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max_sofar=a[0],max_end=0;
    for(int i=0;i<n;i++){
        max_end=max_end+a[i];
        if(max_sofar<max_end)
            max_sofar=max_end;
        if(max_end<0)
            max_end=0;
    }
    printf("%d",max_sofar);
    return 0;
}
