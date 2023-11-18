/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 02/08/23
Objetivo: 

*******************************************************************************/
//bibliotecas
#include <stdio.h>
#include <stdbool.h>

//declarações globais
typedef struct{
    int RA;
    char sexo;
    double media;
    float maiorNota;
}strAluno;

//protótipos
void lerAluno(strAluno *a);

//início da função main
int main(){
    
    strAluno aluno1;
    lerAluno(&aluno1);
    
    printf ("%d\n",aluno1.RA);
    printf("%c\n",aluno1.sexo);
    printf("%.2lf\n",aluno1.media);
    printf("%.2f\n",aluno1.maiorNota);
}//final da função main

//função ler aluno
void lerAluno(strAluno *a){
    printf("Digite o RA do aluno: ");
    scanf("%d",&(*a).RA);
    printf("\nDigite o sexo do aluno: ");
    scanf("%*c %c", &(*a).sexo);
    printf("\nDigite a média do aluno: ");
    scanf("%lf", &(*a).media);
    printf("\nDigite a maior nota: ");
    scanf("%f",&(*a).maiorNota);
}