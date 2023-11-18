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
#include <string.h>

//protótipos
bool possuiSeq13 (long long int numero);
int lerNum();

//início da função main
int main(){
    //declarações locais
    long long int n;
    bool possui;
    
    scanf("%lld",&n);
    
    //uso da sub-rotina que descobre se o número possui a sequência "13"
    possui = possuiSeq13(n);
    
    //resultados
    if(possui==true){
        //se possui "13"
        printf("%lld es de Mala Suerte\n",n);
    }
    else if (possui==false){
        //se não possui "13"
        printf("%lld NO es de Mala Suerte\n",n);
    }
} //término da função main

/* 
    Nome: possuiSeq13.
    Objetivo: vê se o número possui a sequência "13".
    Parâmetro Formais: número inteiro.
    Valor de retorno: valor booleano se possui a sequência ou não.
*/
bool possuiSeq13(long long int numero) {
    //declarações locais
    char numero_str[100];
    
    //conversão do número em string
    sprintf(numero_str, "%lld", numero);
    
    //valor de retorno 
    return strstr(numero_str, "13"); 
}