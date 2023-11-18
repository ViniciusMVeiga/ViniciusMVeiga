#include <stdio.h>

int main()
{
    int i,j;
    int n=46;
    scanf("%d",&n);
    unsigned long long int fib[46];
    fib[0]=0;
    fib[1]=1;
    
    for (i=2;i<46;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    for (i=0;i<n;i++){
        if (i==n-1){
            printf("%lld\n",fib[i]);
        }
        else{
            printf("%lld ",fib[i]);
        }
    }
}