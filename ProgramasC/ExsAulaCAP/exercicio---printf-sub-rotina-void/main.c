/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 26/07/23
Objetivo:

*******************************************************************************/
//bibliotecas
#include <stdio.h>

//constantes
#define elemVetor 3

//protótipo
void print(int []);

//início da função main
int main(){
    //declarações locais
    int valoresDados[elemVetor];
    int i;
    //leitura do vetor de valores dados
    printf("Digite os valores do vetor: \n");
    for (i=0;i<elemVetor;i++){
        scanf("%d",&valoresDados[i]);
    }
    //parâmetros
    print(valoresDados);
}

//início da função de print
void print (int vetor[elemVetor]){
    
    //declarações locais
    int i;
    
    printf("Os valores do vetor são: ");
    //determinação de se o vetor possui o valor a ser buscado
    for(i=0;i<elemVetor;i++){
            printf("%d ",vetor[i]);
    }
}

