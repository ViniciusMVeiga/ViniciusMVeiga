/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 09/08/23
Objetivo: 

*******************************************************************************/
//bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//constantes
#define MAX_ELEMENTOS 1000

//definições globais
typedef struct{
    int elemento[MAX_ELEMENTOS];
    int qtdE;
} strConjunto;

//protótipos
int menu();
void ler1Conjunto(strConjunto *A);
void ler2Conjuntos(strConjunto *A, strConjunto *B);
void escrevaConjunto(strConjunto A);
strConjunto uniao(strConjunto *A, strConjunto *B);
strConjunto intersecao(strConjunto *A, strConjunto *B);
strConjunto subtracao(strConjunto *A, strConjunto *B);
strConjunto subtrValTroc (strConjunto *A, strConjunto *B);
void busca(strConjunto *A);

//início da função main
int main(){
    strConjunto A,B;
    
    if (menu()==1)
        uniao(&A, &B);
    else if (menu()==2)
        intersecao(&A, &B);
    else if (menu()==3)
        subtracao(&A, &B);
    else if (menu()==4)
        subtrValTroc(&A, &B);
    else if (menu()==5)
        busca(&A);

    return 0;
}//término da função main

/* 
    Nome: menu.
    Objetivo: definição da operação a ser realizada.
    Parâmetro Formais: nenhum.
    Valor de retorno: número inteiro lido.
*/
int menu(){
    //declarações locais
    int operacao;
    
    //leitura da operação
    printf("Digite a operação que deseja fazer (1-UNIÃO; 2-INTERSEÇÃO; 3-SUBTRAÇÃO; 4-SUBTRAÇÃO COM VALORES TROCADOS; 5-BUSCA DE UM ELEMENTO.\n");
    scanf("%d",&operacao);
    
    return operacao;
}//término da função menu

/* 
    Nome: ler1Conjunto.
    Objetivo: leitura de um conjunto.
    Parâmetro Formais: conjunto a ser lido.
    Valor de retorno: nenhum.
*/
void ler1Conjunto (strConjunto *A){
    //declarações locais
    int i,j;
    int temp;
    bool insert;
    
    //leitura do conjunto
    printf("Digite a quantidade de elementos do conjunto: ");
    scanf("%d",&A->qtdE);
    if(A->qtdE==0){
        //verificação de se o conjunto é vazio
        printf ("\nCojunto vazio!!!");
    }
    else{
        printf("Digite os valores do conjunto: ");
        
        for(i=0;i<A->qtdE;i++){
            insert=true;
            do{
                scanf("%d",&temp);
                for(j=0;j<i;j++){
                    if(temp==A->elemento[j]){
                        printf("ERRO!!! Números repetidos.\n");
                        insert=false;
                    }
                    else{
                        insert=true;
                    }
                }
            } while(insert==false);
            
            A->elemento[i]=temp;
        }
    }
}

void ler2Conjuntos(strConjunto *A, strConjunto *B){
    printf("Início da leitura do primeiro conjunto.\n");
    ler1Conjunto(A);
    printf("\nInício da leitura do segundo conjunto.\n");
    ler1Conjunto(B);
}

void escrevaConjunto(strConjunto A){
    int i;
    printf("\nO conjunto possui %d elementos, que são: (",A.qtdE);
    for (i=0;i<A.qtdE-1;i++){
        printf("%d, ",A.elemento[i]);
    }
    printf("%d).",A.elemento[A.qtdE-1]);
}

strConjunto intersecao(strConjunto *A, strConjunto *B){
    strConjunto U;
    int i,j,k=0;
    
    ler2Conjuntos(A,B);
    
    printf("\n\nInício da operação de interseção.");
    for (i=0;i<A->qtdE;i++){
        for (j=0;j<B->qtdE;j++){
            if(A->elemento[i]==B->elemento[j]){
                U.elemento[k]=A->elemento[i];
                k=k+1;
            }
        }
    }
    U.qtdE=k;
    
    printf("\nConjunto resultado da interseção de dois conjuntos:");
    escrevaConjunto(U);
    
    return U;
}

strConjunto uniao(strConjunto *A, strConjunto *B){
    strConjunto U;
    int i,j,k=0;
    
    printf("\n\nInício da operação da UNIÃO.\n");
    ler2Conjuntos(A,B);
    
    U.qtdE=A->qtdE;
    for(i=0;i<A->qtdE;i++){
        U.elemento[i]=A->elemento[i];
    }
    for(i=0;i<A->qtdE;i++){
        for(j=0;j<B->qtdE;j++){
            if (A->elemento[i]!=B->elemento[j]){
                U.elemento[k]=B->elemento[j];
                U.qtdE++;
            }
        }
    }
    U.qtdE=k;
    return U;
}

void busca(strConjunto *A){
    int key;
    int i;
    bool possui=false;
    
    ler1Conjunto(A);
    
    printf("\nDigite o número a ser buscado: ");
    scanf("%d",&key);
    
    for (i=0;i<A->qtdE;i++){
        if (key==A->elemento[i]){
            possui=true;
        }
    }
    
    if (possui==true){
        printf("\nO conjunto possui o elemento %d.",key);
    }
    else{
        printf("\nO conjunto não possui o elemento %d.",key);
    }
}

strConjunto subtracao (strConjunto *A, strConjunto *B){
    strConjunto S;
    int i,j,k,l;
    
    ler2Conjuntos(A,B);
    
    printf("\n\nInício da operação de SUBTRAÇÃO.");
    
    S.qtdE=A->qtdE;
    for (i=0;i<S.qtdE;i++){
        S.elemento[i]=A->elemento[i];
    }
    for (i=0;i<A->qtdE;i++){
        for (j=0;j<B->qtdE;j++){
            if(A->elemento[i]==B->elemento[j]){
                for(k=i; k<S.qtdE; k++){
                    S.elemento[k-1]=S.elemento[k];
                    S.qtdE=S.qtdE-1;
                }
            }
        }
    }
}

strConjunto subtrValTroc (strConjunto *A, strConjunto *B){
    
}