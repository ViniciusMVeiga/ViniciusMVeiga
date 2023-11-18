/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 02/08/23
Objetivo: 

*******************************************************************************/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//declarações globais
typedef struct {
    int n; // numerador
    int d; // denominador
} strRacional;

//protótipos
strRacional lerRacional();
strRacional simplificacao(strRacional number);
void escreverNumero(strRacional number);
strRacional somaDoisRacionais (strRacional number1, strRacional number2);
strRacional subtracaoDoisRacionais (strRacional number1, strRacional number2);
strRacional multiplicacaoDoisRacionais (strRacional number1, strRacional number2);
strRacional divisaoDoisRacionais (strRacional number1, strRacional number2);

//início da função main
int main(){
    
    //declarações locais
    strRacional racional1;
    strRacional racional2;
    strRacional soma;
    strRacional subt;
    strRacional multpl;
    strRacional Div;
    
    //leitura dos números digitados
    racional1=lerRacional();
    racional2=lerRacional();
    
    //soma dos números digitados
    soma=somaDoisRacionais (racional1, racional2);
    subt=subtracaoDoisRacionais (racional1, racional2);
    multpl=multiplicacaoDoisRacionais (racional1, racional2);
    Div=divisaoDoisRacionais (racional1, racional2);
    
    //resultados
    escreverNumero(racional1);
    escreverNumero(racional2);
    escreverNumero(soma);
    escreverNumero(subt);
    escreverNumero(multpl);
    escreverNumero(Div);
    
    return 0;
}//final da função main


/* 
    Nome: escreverNumero.
    Objetivo: leitura do número racional.
    Parâmetro Formais: nenhum.
    Valor de retorno: número racional lido.
*/
strRacional lerRacional(){
    strRacional a;
    
    //leitura dos números
    printf("\nDigite o denominador: ");
    scanf("%d",&a.n);
    printf("Digite o numerador: ");
    scanf("%d",&a.d);
    
    if(a.d==0){
        printf("Erro: divisao por zero!!!");
        exit(0);
    }
    
    //simplificação dos números
    a = simplificacao(a);
    
    return a;
}


/* 
    Nome: simplificacao.
    Objetivo: simplificacao do número racional.
    Parâmetro Formais: número racional.
    Valor de retorno: resultado simplificação.
*/
strRacional simplificacao(strRacional number){
    strRacional simp;
    strRacional temp = number;
    
    //definição do mdc
    while (temp.n != 0) {
        int tempValue = temp.n;
        temp.n = temp.d % temp.n;
        temp.d = tempValue;
    }
    //simplificação
    simp.n=number.n/temp.d;
    simp.d=number.d/temp.d;
    
    return simp;
}


/* 
    Nome: escreverNumero.
    Objetivo: escrita do número racional.
    Parâmetro Formais: número racional.
    Valor de retorno: nenhum.
*/
void escreverNumero(strRacional number){
    printf("\nO número racional é %d/%d",number.n,number.d);
}


/*
    Nome: somaDoisRacionais.
    Objetivo: somar dois números racionais
    Parâmetro Formais: número racional 1, número racional 2.
    Valor de retorno: resultado da soma
*/
strRacional somaDoisRacionais (strRacional number1, strRacional number2){
    strRacional resultSoma;
    
    //cálculo da soma
    resultSoma.n=((number1.n*number2.d)+(number2.n*number1.d));
    resultSoma.d=(number1.d*number2.d);
    
    resultSoma = simplificacao(resultSoma);
    
    return resultSoma;
}


/*
    Nome: subtracaoDoisRacionais.
    Objetivo: subtrair dois números racionais.
    Parâmetro Formais: número racional 1, número racional 2.
    Valor de retorno: resultado da subtração.
*/
strRacional subtracaoDoisRacionais (strRacional number1, strRacional number2){
    strRacional resultSubt;
    
    //cálculo da subtração
    resultSubt.n=((number1.n*number2.d)-(number2.n*number1.d));
    resultSubt.d=(number1.d*number2.d);
    
    //simplificação
    resultSubt = simplificacao(resultSubt);
    
    return resultSubt;
}


/*
    Nome: multiplicacaoDoisRacionais.
    Objetivo: multiplicar dois números racionais.
    Parâmetro Formais: número racional 1, número racional 2.
    Valor de retorno: resultado da multiplicação.
*/
strRacional multiplicacaoDoisRacionais (strRacional number1, strRacional number2){
    strRacional resultMult;
    
    //cálculo da multiplicação
    resultMult.n=number1.n*number2.n;
    resultMult.d=number1.d*number2.d;
    
    //simplificação
    resultMult = simplificacao(resultMult);
    
    return resultMult;
}


/*
    Nome: divisaoDoisRacionais.
    Objetivo: dividir dois números racionais.
    Parâmetro Formais: número racional 1, número racional 2.
    Valor de retorno: resultado da divisão.
*/
strRacional divisaoDoisRacionais (strRacional number1, strRacional number2){
    strRacional resultDiv;
    
    //cálculo da divisão
    resultDiv.n=number1.n*number2.d;
    resultDiv.d=number1.d*number2.n;
    
    //simplificação
    resultDiv=simplificacao(resultDiv);
    
    return resultDiv;
}
