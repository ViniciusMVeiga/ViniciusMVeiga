/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 05/07/23
Objetivo: determinar e mostrar se uma turma de alunos possui algum aluno com 
certa idade. A idade a ser buscada deve ser lida do teclado, a qual é chamada 
de chave de busca. Além disso, antes de realizar a busca pela chave, deve-se
ler a idade de todos os alunos da turma. Assim, deve-se usar um vetor para 
armazenar as idades dos alunos.

*******************************************************************************/
#include <stdio.h>


int main()
{
    //declaração das variáveis locais
    int nroDeAlunos;
    int idade[100];
    int i;
    int idadeBuscada;
    short int possui;
    
    //descoberta do número de alunos da turma
    printf("Digite o número de alunos da turma: ");
    scanf("%d", &nroDeAlunos);
    
    //leitura da idade de todos os alunos
    for (i=1; i<=nroDeAlunos; i++)
    {
        printf("\nDigite a idade do aluno %d: ",i);
        scanf("%d", &idade[i]);
    }
    
    //descoberta da idade que será buscada
    printf("\nDigite a idade a ser buscada: ");
    scanf("%d",&idadeBuscada);
    
    //verificação se a turma possui aluno com a idade buscada
    for (i=1; i<=nroDeAlunos;i++)
    {
        if (idadeBuscada==idade[i])
        {
            printf("A turma possui pelo menos um aluno com %d ano(s).", idadeBuscada);
            possui=1;
            break;
        }
    }
    if (possui!=1)
    {
        printf("A turma não possui nenhum aluno com essa idade.");
    }
    
    
    return 0;
}
