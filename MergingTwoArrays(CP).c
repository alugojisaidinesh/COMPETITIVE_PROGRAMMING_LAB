#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n, m;
     scanf("%d", &n);
     int a1[n];
     for (int i = 0; i < n; i++)
         scanf("%d", &a1[i]);
     scanf("%d", &m);
     int a2[m];
     for (int i = 0; i < m; i++)
         scanf("%d", &a2[i]);
     int res[n + m];
     int i = 0, j = 0, k = 0;
     while (i < n && j < m){
        if (a1[i] < a2[j])
            res[k++] = a1[i++];
        else
            res[k++] = a2[j++];
    }
    while(i<n)
        res[k++]=a1[i++];
    while(j<m)
        res[k++]=a2[j++];
    for(i=0;i<k;i++)
        printf("%d ", res[i]);
    return 0;
}
