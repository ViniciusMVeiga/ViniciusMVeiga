/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 10/07/23
Objetivo: Ler os elementos de 2 matrizes de números inteiros e depois calcular
e mostrar a soma destas matrizes. 

*******************************************************************************/
#include <stdio.h>
#define linhas 2
#define colunas 2

//declarações globais
int i;
int j;
double elementoM1[linhas][colunas];
double elementoM2[linhas][colunas];
double elementoMF[linhas][colunas];

int main()
{
    //leitura da matriz 1
    for (i=1; i<=linhas; i++)
    {
        printf("Digite os dados da linha %d matriz 1:\n",i);
        for (j=1; j<=colunas; j++)
        {
            scanf("%lf",&elementoM1[i][j]);
        }
    }
    //leitura da matriz 2
    for (i=1; i<=linhas; i++)
    {
        printf("Digite os dados da linha %d da matriz 2:\n",i);
        for (j=1; j<=colunas; j++)
        {
            scanf("%lf",&elementoM2[i][j]);
        }
    }
    
    //soma das matrizes e resultado
    for (i=1;i<=linhas; i++)
    {
        for (j=1;j<=colunas; j++)
        {    
            elementoMF[i][j]=elementoM1[i][j]+elementoM2[i][j];
            printf("\nO elemento final da linha %d e coluna %d é: %1.lf",i,j,elementoMF[i][j]);
        }
    }
}

