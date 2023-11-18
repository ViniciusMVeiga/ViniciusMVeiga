#include <stdio.h>
#define nEntradas 100
int main() {
    
    int i;
    int n[nEntradas];
    int maior=0;
    
    for (i=1;i<=nEntradas;i++){
        scanf("%d",&n[i]);
        if(n[i]>maior){
            maior=n[i];
        }
    }
    printf("%d\n",maior);
    
    for (i=1;i<=nEntradas;i++){
        if(n[i]==maior){
            printf("%d\n",i);
        }
    }
    
    return 0;
}