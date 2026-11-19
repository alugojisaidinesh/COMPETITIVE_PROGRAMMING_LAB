#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,a[100],x,found=0,temp;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
     for (int i = 0; i < N- 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if(a[i]+a[j]+a[k]==x){
                    printf("%d %d %d \n",a[i],a[j],a[k]);
                    found=1;
                }
            }
        }
    }  
    if(found==0)
        printf("No Triplet Found");   
    return 0;
}
