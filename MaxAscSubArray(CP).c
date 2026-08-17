#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int max_sofar=arr[0];
    int max_end=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            max_end=max_end+arr[i];
        else
            max_end=arr[i];
        if(max_sofar<max_end)
            max_sofar=max_end;
    }
       printf("%d",max_sofar);
    return 0;
}
