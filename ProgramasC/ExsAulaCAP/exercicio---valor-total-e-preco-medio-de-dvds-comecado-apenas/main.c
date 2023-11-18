/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 03/07/23
Objetivo: mostre o valor total em estoque (R$) e o preço médio da unidade de DVD

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define sim 0

//Início da função main
int main()
{
    //Declarações locais
    char nDVDs[50] ;
    int qtdDVDs;
    double precoDVD;
    int qtdTotalDVDs;
    double precoMedioDVD;
    double valorTotalEstoque;
    
    //Definindo valores iniciais das variáveis
    valorTotalEstoque=0;
    precoMedioDVD=0;

    printf("A lista tem pelo menos um DVD?\n");
    scanf("%s",&nDVDs);
    
    if (nDVDs!=0)
    {
        do 
        {
            printf("Digite a quantidade de DVDs: ");
            scanf("%d",&qtdDVDs);
            printf("Digite o preço desse DVD: ");
            scanf("%lf",&precoDVD);
            
            printf("Tem mais algum DVD?\n");
            scanf("%s",nDVDs);
            
            valorTotalEstoque=valorTotalEstoque+qtdDVDs*precoDVD;
            qtdTotalDVDs=qtdTotalDVDs+qtdDVDs;
        }while (nDVDs!=0);
        
        precoMedioDVD=valorTotalEstoque/qtdTotalDVDs;
        
        //Resultados
        printf("\nO valor total do estoque é: %lf",valorTotalEstoque);
        printf("\nO preço médio dos DVDs é: %lf",precoMedioDVD);
    }
    else
    {
        printf("\nNão há DVDs!");
    }
    
    
    return 0;
}


