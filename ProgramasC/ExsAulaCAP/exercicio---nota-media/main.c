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

//Início da função main
int main()
{
    //Leitura das variáveis
    printf ("Digite a nota das três provas e dos dez trabalhos respectivamente, seguindo sua ordem cronológica:\n");
    scanf ("%f %f %f %f %f %f %f %f %f %f %f %f %f", &p1,&p2,&p3,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10);
    
    //Cálculo da Média dos trabalhos
    mediadostrabalhos=(t1+t2+t3+t4+t5+t6+t7+t8+t9+t10)/10;
        
    //Cálculo da Média Final
    mediafinal=0.25*p1+0.25*p2+0.3*p3+0.2*mediadostrabalhos;
        
    //Resultados
    printf("%f", mediafinal);
        
return 0;
}
//Final da função main