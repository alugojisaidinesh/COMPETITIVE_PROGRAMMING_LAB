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
        scanf("%d",&arr[i]);
    int candidate=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else if(arr[i]==candidate)
            count++;
        else 
            count--;
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate)
            count++;
    }
    if(count>n/2)
        printf("%d",candidate);
    else
        printf("-1");
    return 0;
}
