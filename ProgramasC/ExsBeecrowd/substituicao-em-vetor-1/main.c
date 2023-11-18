#include <stdio.h>
 
int main() {
    
    int X[10];
    int i;
    
    for (i=0;i<10;i++){
        printf("digite o valor do X[%d]: ",i);
        scanf("%d",&X[i]);
        
        if (X[i]<=0){
            X[i]=1;
        }
    };
    
    for (i=0;i<10;i++){
        printf("\nX[%d] = %d",i,X[i]);
    }
}