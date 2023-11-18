/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 10/07/23
Objetivo: 

*******************************************************************************/
#include <stdio.h>
#define linhas 3
#define colunas 2

//declarações globais
int i;
int j;
double elementoM1[linhas][colunas];
double elementoMF[colunas][linhas];

int main()
{
    //leitura da matriz
    for (i=1; i<=linhas; i++)
    {
        printf("Digite os dados da linha %d matriz 1:\n",i);
        for (j=1; j<=colunas; j++)
        {
            scanf("%lf",&elementoM1[i][j]);
        }
    }
    //resultado
    for (j=1; j<=colunas; j++)
    {
        for (i=1; i<=linhas; i++)
        {
            elementoMF[j][i]=elementoM1[i][j];
            printf("Esse é o elemento final da linha %d e da coluna %d: %lf\n", j, i, elementoMF[j][i]);
        }
    }
}