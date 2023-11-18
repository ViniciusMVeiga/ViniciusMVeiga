#include <stdio.h>
#define ValMAX 99999999
 
int main() {
    
    //declarações locais
    int n;
    int menorValor=ValMAX;
    
    //leitura do tamanho do vetor
    scanf("%d",&n);
    int x[n];
    
    //definição do menor valor
    int i;
    for(i=0;i<n;i++){
        scanf("%d%*c",&x[i]);
        if (menorValor>x[i]){
            menorValor=x[i];
        }
    }
    //resultado do menor valor
    printf("Menor Valor: %d\n",menorValor);
    
    //definição da posição do menor valor
    for(i=0;i<n;i++){
        if(menorValor==x[i]){
            //resultado da posição do menor valor
            printf("Posicao: %d\n",i);
        }
    }
    
    return 0;
}