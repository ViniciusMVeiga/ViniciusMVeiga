/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 03/07/23
Objetivo: verificar se um número é primo

*******************************************************************************/
#include <stdio.h>

//Início da Função Main
int main()
{
    //Declarações locais
    int i;
    int n;
    double resto;
    
    
    //Leitura da entrada
    scanf("%d",&n);
    if (n==2)
    {
        printf ("é primo");
    }
    else
    {
    
        //Resultado
        for (i=2;i<n-1;i++)
        {
            resto=n%i;
            if (resto==0)
                {
                    printf ("não é primo");
                    break;
                }
            else
                {
                    printf ("é primo");
                }
        }
    }

    return 0;
}
//Fim da Função Main
