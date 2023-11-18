#include <stdio.h>

int main()
{
    int N[20];
    int A[20];
    int i;
    int j;
    
    for (i=19;i>=0;i+=-1){
        scanf("%d",&A[i]);
    }
    
    for (i=0;i<20;i++){
            N[i]=A[i];
            printf("N[%d] = %d\n",i,N[i]);
    }
}