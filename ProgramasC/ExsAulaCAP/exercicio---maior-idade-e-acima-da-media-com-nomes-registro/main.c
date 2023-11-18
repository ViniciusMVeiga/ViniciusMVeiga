/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 19/07/23
Objetivo: Manipule dados de alunos de uma turma de CAP. Os dados de entrada de 5
alunos estarão no formato: nome, RA, sexo e idade. Determine e mostre a maior 
idade dentre as idades dos alunos. Mostre o nome, RA e sexo dos alunos que 
possuem a maior idade (Obs.: pode ser que mais de um aluno tenha a maior idade).
Também calcule e mostre quantos alunos possuem a idade maior do que a média de
idade dos alunos. Mostre o nome, RA e sexo dos alunos que possuem a idade maior
do que a média de idade dos alunos. Deve-se obrigatoriamente agrupar os dados 
dos alunos usando o conceito de registro.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamNome 50 //tamanho máximo do nome
#define alunosTurma 2 //número de alunos da turma

//declarações globais
typedef struct {
    char nome[tamNome];
    int RA,idade;
    char sexo;
}strAluno;

//início da função main
int main ()
{
    //declarações locais
    strAluno aluno[alunosTurma];
    int i;
    int somaDasIdades=0;
    double mediaDasIdades;
    int alunosAcimaDaIdadeMedia=0;
    int maiorIdade=0;
    
    //leitura de dados
    for(i=0;i<alunosTurma;i++){
        printf("Digite o nome do aluno %d: ",i);
        scanf("%s",&aluno[i].nome);
        printf("Digite o RA do aluno %d: ",i);
        scanf("%d",&aluno[i].RA);
        printf("Digite a idade do aluno %d: ",i);
        scanf("%d",&aluno[i].idade);
        printf("Digite o sexo do aluno %d (responder M (masculino),F (feminino) ou N (não informado)): ",i);
        scanf("%*c%c",&aluno[i].sexo);
    }
    
    //definição da maior idade
    for(i=0;i<alunosTurma;i++){
        if (maiorIdade<aluno[i].idade){
            maiorIdade=aluno[i].idade;
        }
    }
    
    //definição da soma das idades dos alunos
    for(i=0;i<alunosTurma;i++){
        somaDasIdades=somaDasIdades+aluno[i].idade;
    }
    
    //definição da média das idades dos alunos
    mediaDasIdades=(double)somaDasIdades/alunosTurma;
    printf("\n\nA média das idades é %.2lf.\n",mediaDasIdades);
    
    //dados do(s) aluno(s) de maior idade
    for(i=0;i<alunosTurma;i++){
        if (aluno[i].idade==maiorIdade){
            printf("O aluno (ou um dos) aluno(s) de maior idade é %s com RA %d, idade %d, e sexo %c.\n",aluno[i].nome,aluno[i].RA,aluno[i].idade,aluno[i].sexo);
        }
    }
    
    //definição do número de alunos acima da média das idades
    for(i=0;i<alunosTurma;i++){
        if(aluno[i].idade>mediaDasIdades){
            alunosAcimaDaIdadeMedia=alunosAcimaDaIdadeMedia+1;
        }
    }
    printf("A turma possui %d aluno(s) acima da média das idades.\n", alunosAcimaDaIdadeMedia);
    
    //dados dos alunos acima da média das idades
    for(i=0;i<alunosTurma;i++){
        if(aluno[i].idade>mediaDasIdades){
            printf("O aluno (ou um dos) aluno(s) de idade maior que a média das idades é %s com RA %d, idade %d, e sexo %c.\n"
            ,aluno[i].nome,aluno[i].RA,aluno[i].idade,aluno[i].sexo);
        }
    }
    
    return 0;
}