#include <stdio.h>

int main()
{
    int i,j;
    unsigned long long int fib[64];
    
    int nTestes;
    scanf("%d",&nTestes);
    
    int valorProcurado[nTestes];
    
    fib[0]=0;
    fib[1]=1;
    
    for (i=2;i<64;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    for (i=0;i<nTestes;i++){
        scanf("%d", &valorProcurado[i]);
    }    
    for (i=0;i<nTestes;i++){
    printf("Fib(%d) = %lld\n",valorProcurado[i],fib[valorProcurado[i]]);
    }
}
