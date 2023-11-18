#include <stdio.h>

int main()
{
    int N[10];
    int i;
    
    scanf("%d",&N[0]);
    printf("N[0] = %d\n",N[0]);
    
    for (i=1;i<10;i+=1){
        N[i]=2*N[i-1];
        
        printf("N[%d] = %d\n",i,N[i]);
    }
}
