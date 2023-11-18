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
double elemento[linhas][colunas];
double maiorElemento=0;

int main()
{
    //declarações locais
    int i;
    int j;
    
    //leitura da matriz
    for (i=1; i<=linhas; i++)
    {
        for (j=1; j<=colunas; j++)
        {
            printf("Digite os dados da linha %d e da coluna %d da matriz 1:\n",i,j);
            scanf("%lf",&elemento[i][j]);
        }
    }
    
    //comparação dos elementos
    for (i=1; i<=linhas; i++)
    {
        for (j=1; j<=colunas; j++)
        {
            if (elemento[i][j]>maiorElemento)
            {
                maiorElemento=elemento[i][j];
            }
        }
    }
    
    //resultado
    printf("\nO maior elemento é: %.2lf",maiorElemento);
}
