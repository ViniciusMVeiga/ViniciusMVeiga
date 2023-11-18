/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 10/07/23
Objetivo: Ler os elementos de uma matriz de números reais e depois verificar 
se a matriz é uma matriz identidade.
*******************************************************************************/
#include <stdio.h>
#define linhas 2
#define colunas 2
#define falso 0
#define valido 1 

//declarações globais
double elementoMI[linhas][colunas];
short int situacao=1;

int main()
{
    //declarações locais
    int i;
    int j;
    
    //leitura da matriz inicial
    for (i=1; i<=linhas; i++)
    {
        for (j=1; j<=colunas; j++)
        {
            printf("Digite os dados da linha %d e da coluna %d matriz 1:\n",i,j);
            scanf("%lf",&elementoMI[i][j]);
        }
    }
    
    //verificação de se a matriz fornecida é a matriz identidade
    for (i=1; i<=linhas; i++)
    {
        for (j=1; j<=colunas; j++)
        {
            if (i==j)
            {
                if (elementoMI[i][j]!=1)
                {
                    situacao=falso;
                }
            }
            if (i!=j)
            {
                if (elementoMI[i][j]!=0)
                {
                    situacao=falso;
                } 
            }
        }
    }
    
    //resultado
    if (situacao==valido)
    {
        printf("\nEssa matriz é a identidade.");
    }
    else
    {
        printf("\nEssa matriz não é a identidade.");
    }
}
