/******************************************************************************

Autor: Gustavo de Oliveira Gimenes 
RA: 820759
Data: 26/06/23
Objetivo: Algoritmo IMC

*******************************************************************************/
#include <stdio.h>

    
//Declarações globais
double peso;
double altura;
double IMC;
    
//Início da função main
int main()
{
    
    //Leitura das entradas
    printf("Digite o seu peso quilogramas: ");
    scanf("%lf", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);
    
    //Cálculo do IMC
    IMC=peso/(altura*altura);
    
    //Resultado final
    printf("Seu IMC é: %lf", IMC);
    
    
    return 0;
}//Final da função main