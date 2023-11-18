AP3 - Programa Menor e Maior Valor
Ricardo Ciferri
•
28 de jun.
100 pontos
Data de entrega: 28 de jun., 17:30
Faça um programa na linguagem C que resolva o seguinte problema. Calcule e mostre na tela do computador o menor e o maior valor dentre 5 números inteiros. Envie o código-fonte da solução em um arquivo texto com extensão ".c".
Comentários da turma
Seus trabalhos
Entregue com atraso
Atividade Prática 3 - Maior e Menor Valor.c
C
Comentários particulares

/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 28/06/23
Objetivo: Atividade Prática 3

*******************************************************************************/
#include <stdio.h>

//Início da Função Main
int main()
{
    //Declarações locais
    int n1, n2, n3, n4, n5, menorValor, maiorValor;
    
    //Leitura dos dados de entrada
    printf ("Digite os cinco números inteiros:");
    scanf ("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    //Definir o Menor Valor
    menorValor=n1;
    if (menorValor>n2){
        menorValor=n2;
    }
        if (menorValor>n3){
            menorValor=n3;
        }
            if (menorValor>n4){
                menorValor=n4;
            }
                if (menorValor>n5){
                    menorValor=n5;
                }
    
    //Definir o Maior Valor
    maiorValor=n1;
    if (maiorValor<n2){
        maiorValor=n2;
    }
        if (maiorValor<n3){
            maiorValor=n3;
        }
            if (maiorValor<n4){
                maiorValor=n4;
            }
                if (maiorValor<n5){
                    maiorValor=n5;
                }
    
    //Mostrar resultados
    printf("%d", menorValor);
    printf("\n%d", maiorValor);
    
    return 0;
}
//Fim da Função Main
