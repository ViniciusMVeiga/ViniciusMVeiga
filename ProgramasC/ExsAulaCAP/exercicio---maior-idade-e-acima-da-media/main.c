/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 05/07/23
Objetivo: mostre a maior idade e o número de alunos acima da média de idades
dentre n alunos

*******************************************************************************/
#include <stdio.h>
#define maxAlunos 50

int main()
{
    //declaração das variáveis locais
    int nroDeAlunos;
    int i;
    int idade[maxAlunos];
    int somaDasIdades;
    float mediaDasIdades;
    int maiorIdade;
    int nroDeAlunosComIdadeMaior;
    
    //definir variáveis valendo 0 inicialmente
    maiorIdade==0;
    nroDeAlunosComIdadeMaior==0;
    
    //verificar o número de alunos
    printf("digite o número de alunos (no máximo 50 alunos):\n");
    scanf("%d", &nroDeAlunos);
    if (nroDeAlunos>50)
    {
        printf("Ultrapassou o número máximo de alunos");
    }
    else
    {
        for (i=1; i<=nroDeAlunos; i++)
        {
            //leitura das idades dos alunos
            printf("Digite a idade do aluno %d:\n",i);
            scanf("%d", &idade[i]);
            
            //cálculo da maior idade
            if (idade[i]>maiorIdade)
            {
                maiorIdade=idade[i];
            }
            
            //cálculo da soma das idades
            somaDasIdades=somaDasIdades+idade[i];
        }
    }
    
    //cálculo da média das idades
    mediaDasIdades=(somaDasIdades)/(nroDeAlunos);
    
    //verificação de quantos alunos possuem idade superior à média das idades
    for (i=1; i<=nroDeAlunos; i++)
    {
        if (idade[i]>mediaDasIdades)
        {
            nroDeAlunosComIdadeMaior=nroDeAlunosComIdadeMaior+(1);
        }
    }
    //resultados
    printf("Maior idade:%d\nNúmero de alunos com idade maior que a média: %d\n",maiorIdade,nroDeAlunosComIdadeMaior);
    
    return 0;
}