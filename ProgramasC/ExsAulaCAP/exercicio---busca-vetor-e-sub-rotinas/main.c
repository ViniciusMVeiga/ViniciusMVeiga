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
#define TRUE 1
#define FALSE 0

//parâmetros
int funcaoAchou(int vetor[],int busca);

//início da função main
int main(){
    //declarações locais
    int i;
    int valorBusc;
    int valoresDados[elemVetor];
    
    //leitura do vetor de valores dados
    printf("Digite os valores do vetor: \n");
    for (i=0;i<elemVetor;i++){
        scanf("%d",&valoresDados[i]);
    }
    //leitura do valor a ser buscado
    printf("\nDigite o valor a ser buscado: \n");
    scanf("%d",&valorBusc);
    
    //recebimento do resultado da sub-rotina "funcaoAchou"
    short int funVal=funcaoAchou(valoresDados,valorBusc);
    
    //resultado
    if (funVal==TRUE){
        printf("\nPossui\n");
    }
    else if (funVal==FALSE){
        printf("\nNão possui\n");
    }
    return 0;
}

//início da função de verificação do valor a ser buscado
int funcaoAchou(int vetor[elemVetor],int busca){
    
    //declarações locais
    int i;
    short int achou=FALSE;
    
    //determinação de se o vetor possui o valor a ser buscado
    for(i=0;i<elemVetor;i++){
        if (busca==vetor[i]){
            achou=TRUE;
        }
    }
    return achou;
}


