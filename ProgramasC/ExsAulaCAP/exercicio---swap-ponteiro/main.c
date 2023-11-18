/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 31/07/23
Objetivo: Faça um swap usando ponteiro

*******************************************************************************/
//bibliotecas
#include <stdio.h>

//protótipos
void swap(int *x, int *y)

//início da fução main
int main(){
    
    //declarações locais
    int a, b;
    
    //leitura das variáveis
    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &a, &b);
    
    //uso da função swap
    swap(&a,&b);
    
    //resultados
    printf("%d %d\n", a, b);
    return 0;
}

//início da sub-rotina
void swap(int *x, int *y){ 
    
    //declarações locais
    int temp;
    
    //trocas das variáveis
    temp=*x;
    *x=*y;
    *y=temp;
}