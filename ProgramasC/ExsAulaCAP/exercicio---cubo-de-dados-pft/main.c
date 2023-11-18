/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 17/07/23
Objetivo:  Manipular um cubo de dados com as dimensões produto, filial e tempo 
que armazena o total de vendas. O arranjo multidimensional armazena o total de
vendas que acontece em cada combinação de produto, filial e tempo (dia no ano).
Primeiramente, fazer a leitura de todos os dados de entrada por meio de uma 
varredura completa do cubo de dados. Em seguida, fazer uma busca e mostre o 
total de vendas para um determinado produto em uma determinada filial e um certo 
tempo.

*******************************************************************************/
#include <stdio.h>

//definição dos valores máximos
#define maxProdutos 2
#define maxFiliais 2
#define maxDias 2

int main()
{
    int nP,nF,nD; //números do produto, filial e dia buscado
    int venda [maxProdutos][maxFiliais][maxDias]; //número de vendas de cada elemento do arranjo tridimensional
    int i,j,k; //variáveis suporte
    
    //leitura das vendas
    for (i=0;i<maxProdutos;i++){
        for (j=0;j<maxFiliais;j++){
            for (k=0;k<maxDias;k++){
                printf("Digite a quantidade de vendas do produto %d, na filial %d, durante o dia %d: ",i,j,k);
                scanf("%d",&venda[i][j][k]);
            }
        }
    }
    
    //leitura dos dados da venda a ser buscada
    printf("\nDigite o produto, a filial e o dia que deseja pesquisar: ");
    scanf ("%d %d %d", &nP,&nF,&nD);
    
    //resultados
    if (nP>maxProdutos||nF>maxFiliais||nD>maxDias){
        printf("Erro!!!");
    }
    else {
        printf("\nEste foi o número de vendas: %d",venda[nP][nF][nD]);
    }
}
