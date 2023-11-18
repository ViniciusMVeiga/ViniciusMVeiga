/******************************************************************************

Autor: Vinícius Marto da Veiga 
RA: 821252
Data: 31/07/23
Objetivo:  

*******************************************************************************/
//bibliotecas
#include <stdio.h>
#include <stdbool.h>

//protótipos
bool verifTriang(double lado1,double lado2,double lado3);

//início da função main
int main()
{
    //declarações locais
    double l1,l2,l3;
    double la,lb,lc;
    
    do{
        //leitura dos lados do triângulo
        scanf("%lf %lf %lf",&l1,&l2,&l3);
        
        if(l1!=-1&&l2!=-1&&l3!=-1){
            
            //ordenação dos lados
            if(l1>=l2&&l1>=l3&&l2>=l3){
                la=l1;
                lb=l2;
                lc=l3;
            }
            if(l1>l2&&l1>=l3&&l3>=l2){
                la=l1;
                lb=l3;
                lc=l2;
            }
            if(l2>l1&&l2>=l3&&l1>=l3){
                la=l2;
                lb=l1;
                lc=l3;
            }
            if(l2>l1&&l2>=l3&&l3>=l1){
                la=l2;
                lb=l3;
                lc=l1;
            }
            if(l3>l1&&l3>=l2&&l1>=l2){
                la=l3;
                lb=l1;
                lc=l2;
            }
            if(l3>l1&&l3>=l2&&l2>=l1){
                la=l3;
                lb=l2;
                lc=l1;
            }
            
            //resultado
            if(verifTriang(la,lb,lc)==true){
                printf("Forma triângulo\n");
            }
            else{
                printf("Não forma triângulo\n");
            }
        }
    }while(l1!=-1&&l2!=-1&&l3!=-1);
    
    return 0;
}

/*  -sub-rotina: verifTriang.
    -programador: Vinícius Marto da Veiga.
    -data de criação: 31/07/2023.
    -data de alteração: 31/07/2023.
    -objetivo: verificar se três lados dados formam triângulo.
    -parâmetros formais: maior lado (lado1), lado intermediário(lado2), menor
    lado(lado3).
    -valor de retorno: true: forma triângulo; false: não forma triângulo.
*/
bool verifTriang(double lado1,double lado2,double lado3){
    
    //declarações locais
    bool ehTriangulo;
    
    //verificação de se forma triângulo
    if (lado1>lado2+lado3){
        ehTriangulo=false;
    }
    else{
        ehTriangulo=true;
    }
    
    //valor de retorno da função
    return ehTriangulo;
}//final da sub-rotina
