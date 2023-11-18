/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 10/07/23
Objetivo: Ler os elementos de uma matriz de números inteiros e depois verificar
se um certo valor está armazenado na matriz.

*******************************************************************************/
#include <stdio.h>
#define linhas 2
#define colunas 2
#define falso 0
#define verdadeiro 1

//declarações globais
double elemento[linhas][colunas];
double numeroBuscado;
short int situacao=falso;

int main()
{
    //declarações locais
    int i;
    int j;
    
    //leitura da matriz
    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            printf("Digite os dados da linha %d e da coluna %d da matriz:\n",i,j);
            scanf("%lf",&elemento[i][j]);
        }
    }
    
    //leitura do número a ser buscado
    printf("\nDigite o número que será buscado:\n");
    scanf("%lf",&numeroBuscado);
    
    //verificação se a matriz possui o numero buscado
    for (i=0; i<linhas; i++)
    {
        for (j=0;j<colunas; j++)
        {
            if (elemento[i][j]==numeroBuscado)
            {
                situacao=verdadeiro;
            }
        }
    }
    
    //resultado
    if (situacao==falso)
    {
        printf("\nA matriz não possui o número buscado.");
    }
    else
    {
        printf("\nA matriz possui o número buscado.");
    }
}
