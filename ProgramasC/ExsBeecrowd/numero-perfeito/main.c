#include <stdio.h>
 
int main() {
    
    int n;
    scanf("%d",&n);
    int i,j;
    
    int teste[n];
    int somaD[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&teste[i]);
    }
    
    for(i=0;i<n;i++){
        somaD[i]=0;
        for(j=1;j<teste[i]-1;j++){
            if(teste[i]%j==0){
                somaD[i]=somaD[i]+j;
            }
        }    
        if(somaD[i]==teste[i]){
            printf("%d eh perfeito\n",teste[i]);
        }
        else{
            printf("%d nao eh perfeito\n",teste[i]);
        }
    }
    return 0;
}