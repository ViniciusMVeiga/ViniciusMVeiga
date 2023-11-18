#include <stdio.h>
 
int main() {
    
    //declarações locais
    int nExp;
    
    int quantDoAnimal;
    char animal;
    
    int totalRato=0;
    int totalSapo=0;
    int totalCoelho=0;
    int totalAnimais=0;
    
    double porcentRato;
    double porcentSapo;
    double porcentCoelho;
    
    //leitura de quantas experiências foram feitas
    scanf("%d",&nExp);
    
    int i;
    for (i=0;i<nExp;i++){
        //leitura da quantidade de cobaias e do animal utilizado
        scanf("%d %c",&quantDoAnimal,&animal);
        //cálculo do total de cobaias utilizados
        totalAnimais=totalAnimais+quantDoAnimal;
        //cálculo do total de cobaias utilizados de cada espécie
        if (animal=='R'){
            totalRato=totalRato+quantDoAnimal;
        }
        else if (animal=='S'){
            totalSapo=totalSapo+quantDoAnimal;
        }
        else if(animal=='C'){
            totalCoelho=totalCoelho+quantDoAnimal;
        }
    }

    //cálculo das porcentagens de cada animal
    porcentRato=((double)totalRato/totalAnimais)*100;
    porcentSapo=((double)totalSapo/totalAnimais)*100;
    porcentCoelho=((double)totalCoelho/totalAnimais)*100;

    //resultados
    printf("Total: %d cobaias\n",totalAnimais);
    printf("Total de coelhos: %d\n",totalCoelho);
    printf("Total de ratos: %d\n",totalRato);
    printf("Total de sapos: %d\n",totalSapo);
    printf("Percentual de coelhos: %.2lf %\n",porcentCoelho);
    printf("Percentual de ratos: %.2lf %\n",porcentRato);
    printf("Percentual de sapos: %.2lf %\n",porcentSapo);
    
    return 0;
}