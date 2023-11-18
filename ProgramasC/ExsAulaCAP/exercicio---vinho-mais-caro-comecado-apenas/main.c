/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 03/07/23
Objetivo: achar o vinho mais caro

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>

//Início da Função Main
int main()
{
    //Declarações locais
    char nomeDoVinhoMaisCaro;
    double precoDoVinhoMaisCaro;
    char tipoDoVinhoMaisCaro;
    char nomeDoVinho;
    double precoDoVinho;
    char tipoDoVinho;
    
    //Atribuir 0 ao precoDoVinhoMaisCaro no Início
    precoDoVinhoMaisCaro=0;
    
    do
    {
        printf("Digite o nome, preço e tipo do vinho, respectivamente e separados por barra\n");
        scanf("%s/%lf/%s", &nomeDoVinho, &precoDoVinho, &tipoDoVinho);
        
        if (precoDoVinho>precoDoVinhoMaisCaro)
        {
            nomeDoVinhoMaisCaro=nomeDoVinho;
            precoDoVinhoMaisCaro=precoDoVinho;
            tipoDoVinhoMaisCaro=tipoDoVinho;
        }
    }
    while (nomeDoVinho="fim");
    
    printf ("Nome do vinho mais caro: %s \n Preco do vinho mais caro: %lf Tipo do vinho mais caro: %s",
    nomeDoVinhoMaisCaro, precoDoVinhoMaisCaro, tipoDoVinhoMaisCaro);
    
   return 0;
}
//Fim da Função Main
