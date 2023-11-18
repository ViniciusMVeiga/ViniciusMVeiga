/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 17/07/23
Objetivo: 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

//definição dos valores máximos
#define maxProdutos 2
#define maxFiliais 2
#define maxDias 2

int main()
{
    //nome do produto e da filial que estão sendo buscados, e dia buscado
    char nPB[50], nFB[50];
    int nDB;
    //número de vendas de cada elemento do arranjo tridimensional
    int venda [maxProdutos][maxFiliais][maxDias]; 
    //variáveis suporte
    int i;
    char nP[i][50];
    int j;
    char nF[j][50];
    int k;
    int a;
    int b;
    
    //leitura dos nomes dos produtos
    for (i=0;i<maxProdutos;i++){
        scanf("%s",nP[i][50]);
    }
    
    //leitura dos nomes das filiais
    for (j=0;j<maxFiliais;j++){
        scanf("%s",nF[j][50]);
    }
    
    //leitura das vendas
    for (i=0;i<maxProdutos;i++){
        for (j=0;j<maxFiliais;j++){
            for (k=0;k<maxDias;k++){
                printf("Digite a quantidade de vendas do produto %s, na filial %s, durante o dia %d: ",nP[i],nF[j],k);
                
                scanf("%d",&venda[i][j][k]);
            }
        }
    }
    
    //leitura dos dados da venda a ser buscada
    printf("\nDigite o produto, a filial e o dia que deseja buscar: ");
    scanf ("%s %s %d", nPB,nFB,&nDB);
    
    //comparação do nome do produto e da filial
    for (i=0;i<maxProdutos;i++){
        strncmp (nPB[50],nP[i][50]){
            a=i;
        }
    }
    for (j=0;j<maxFiliais;j++){
        strncmp (nFB[50],nF[j][50]){
            b=j;
        }
    }
    
    //resultados
    printf("\nEste foi o número de vendas: %d",venda[nP[i]][nF[j]][nD[k]);
}