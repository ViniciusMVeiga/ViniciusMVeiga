/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 28/06/23
Objetivo: Exercício Nota Média

*******************************************************************************/
#include <stdio.h>

//Declarações Globais
float p1, p2, p3;
float t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
float mediafinal, mediadostrabalhos;
float frequencia;
float situacao;

//Início da função main
int main()
{
    //Leitura das variáveis
    printf ("Digite a nota das três provas, dos dez trabalhos e da frequencia (número inteiro de 0 a 100) respectivamente, seguindo sua ordem cronológica:\n");
    scanf ("%f %f %f %f %f %f %f %f %f %f %f %f %f %f", &p1,&p2,&p3,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10, &frequencia);
    
    //Cálculo da Média dos Trabalhos
    mediadostrabalhos=(t1+t2+t3+t4+t5+t6+t7+t8+t9+t10)/10;
        
    //Cálculo da Média Final
    mediafinal=0.25*p1+0.25*p2+0.3*p3+0.2*mediadostrabalhos;
    
    //Resultado Média Final
    printf("%.2f", mediafinal);
    
    //Definição e Resultado da Situação
    if (frequencia < 75) {
        situacao==0;
        printf ("\nReprovado");
    }
    else if (mediafinal<6 && mediafinal>=5) {
        situacao==2;
        printf ("\nRecuperação");
    }
    else if (mediafinal>=6){
        situacao==1;
        printf ("\nAprovado");
    }
        
        
return 0;
}
//Final da função main