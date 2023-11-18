//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//início da função main
int main(){
    
    //declarações locais
    int *idadeAlunos;
    int nAlunos;
    int i;
    
    //leitura do número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d",&nAlunos);
    
    //alocação de memória para o vetor armazenador das idades dos alunos
    idadeAlunos = (int*) malloc(nAlunos*sizeof(int));
    
    //leitura das idades dos alunos
    for (i=0;i<nAlunos;i++){
        printf("Digite a idade do aluno %d: ",i);
        scanf("%d",&idadeAlunos[i]);
    }
    
    printf("\n");
    
    //resultados
    for (i=0;i<nAlunos;i++){
        printf("A idade do aluno %d é: %d\n",i,idadeAlunos[i]);
    }
    
    //desalocação da memória
    free(idadeAlunos);
    
    return 0;
} //fim da função main