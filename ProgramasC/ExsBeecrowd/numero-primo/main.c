#include <stdio.h>
 
int main() {
    
    int n;
    scanf("%d",&n);
    int i,j;
    
    int teste[n];
    short int ePrimo[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&teste[i]);
    }
    
    for(i=0;i<n;i++){
        ePrimo[i]=1;
        for(j=2;j<teste[i]-1;j++){
            if(teste[i]%j==0){
                ePrimo[i]=0;
            }
        }    
        if(ePrimo[i]==1){
            printf("%d eh primo\n",teste[i]);
        }
        else{
            printf("%d nao eh primo\n",teste[i]);
        }
    }
    return 0;
}