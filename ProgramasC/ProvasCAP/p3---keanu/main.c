/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 30/08/23

*******************************************************************************/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//protótipos
int lerNum();
void escreverNumeroDeCasas (int bran, int pre);
int calcNumPar (int n, int *bran, int *pre);
int calcNumImpar (int n, int *bran, int *pre);

//início da função main
int main(){

    //declarações locais
    int n=lerNum();
    int bran, pre;
    
    //verificação de se n é par ou ímpar
    if (n%2==0){
        //cálculo para n par
        calcNumPar(n,&bran,&pre);
    }
    else if (n%2==1){
        //cálculo para n ímpar
        calcNumImpar(n,&bran,&pre);
    }
    
    //resultados
    escreverNumeroDeCasas(bran,pre);

    return 0;
} //término da função main

/* 
    Nome: lerNum.
    Objetivo: leitura do número inteiro.
    Parâmetro Formais: nenhum.
    Valor de retorno: número inteiro lido.
*/
int lerNum(){
    //declarações locais
    int n;
    
    //leitura do número
    scanf("%d",&n);
    
    //valor de retorno
    return n;
}

/* 
    Nome: escreverNumeroDeCasas.
    Objetivo: escrita de dois números inteiros.
    Parâmetro Formais: dois números inteiros.
    Valor de retorno: nenhum.
*/
void escreverNumeroDeCasas (int bran, int pre){
    printf("%d casas brancas e %d casas pretas\n",bran,pre);
}

/* 
    Nome: calcNumPar.
    Objetivo: calcular o número de casas brancas e casas pretas.
    Parâmetro Formais: n do tabuleiro, número de casas brancas e pretas.
    Valor de retorno: número de casas brancas e pretas.
*/
int calcNumPar (int n, int *bran, int *pre){
    //cálculo de casas brancas
    *bran=(n*n)/2;
    //cálculo de casas pretas
    *pre=(n*n)/2;
}

/* 
    Nome: calcNumImpar.
    Objetivo: calcular o número de casas brancas e casas pretas.
    Parâmetro Formais: n do tabuleiro, número de casas brancas e pretas.
    Valor de retorno: número de casas brancas e pretas.
*/
int calcNumImpar (int n, int *bran, int *pre){
    //cálculo de casas brancas
    *bran=((n*n)+1)/2;
    //cálculo de casas pretas
    *pre=((n*n)-1)/2;
}