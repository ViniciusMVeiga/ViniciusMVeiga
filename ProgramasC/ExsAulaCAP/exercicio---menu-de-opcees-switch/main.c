/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 03/07/23
Objetivo: Menu de opções

*******************************************************************************/
#include <stdio.h>

//Início da Função Main
int main()
{
    //Declarações locais
    int v;
    
    //Leitura da variável
    printf ("As opções do menu são \n1- INSERT\n2-DELETE\n3-UPDATE\n4-SEARCH\n5-BROWSE\n");
    scanf ("%d",v);
    
    //Resultado
    switch(v)
    {
        case 1:
            printf("INSERT");
        case 2:
            printf("DELETE");
        case 3:
            printf("UPDATE");
        case 4:
            printf("SEARCH");
        case 5:
            printf("BROWSE");
    }

    return 0;
}
//Fim da Função Main
