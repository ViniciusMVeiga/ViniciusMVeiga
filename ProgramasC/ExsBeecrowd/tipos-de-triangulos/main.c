#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    float l1,l2,l3;
    float a,b,c;
}strLadosTriangulo;

int main() {
    strLadosTriangulo triangulo;
    
    scanf("%f %f %f",&triangulo.l1,&triangulo.l2,&triangulo.l3);
    if(triangulo.l1>=triangulo.l2&&triangulo.l1>=triangulo.l3&&triangulo.l2>=triangulo.l3){
        triangulo.a=triangulo.l1;
        triangulo.b=triangulo.l2;
        triangulo.c=triangulo.l3;
    }
    if(triangulo.l1>triangulo.l2&&triangulo.l1>=triangulo.l3&&triangulo.l3>=triangulo.l2){
        triangulo.a=triangulo.l1;
        triangulo.b=triangulo.l3;
        triangulo.c=triangulo.l2;
    }
    if(triangulo.l2>triangulo.l1&&triangulo.l2>=triangulo.l3&&triangulo.l1>=triangulo.l3){
        triangulo.a=triangulo.l2;
        triangulo.b=triangulo.l1;
        triangulo.c=triangulo.l3;
    }
    if(triangulo.l2>triangulo.l1&&triangulo.l2>=triangulo.l3&&triangulo.l3>=triangulo.l1){
        triangulo.a=triangulo.l2;
        triangulo.b=triangulo.l3;
        triangulo.c=triangulo.l1;
    }
    if(triangulo.l3>triangulo.l1&&triangulo.l3>=triangulo.l2&&triangulo.l1>=triangulo.l2){
        triangulo.a=triangulo.l3;
        triangulo.b=triangulo.l1;
        triangulo.c=triangulo.l2;
    }
    if(triangulo.l3>triangulo.l1&&triangulo.l3>=triangulo.l2&&triangulo.l2>=triangulo.l1){
        triangulo.a=triangulo.l3;
        triangulo.b=triangulo.l2;
        triangulo.c=triangulo.l1;
    }
    
    if (triangulo.a>=triangulo.b+triangulo.c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(pow(triangulo.a,2)==pow(triangulo.b,2)+pow(triangulo.c,2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(triangulo.a,2)>pow(triangulo.b,2)+pow(triangulo.c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(triangulo.a,2)<pow(triangulo.b,2)+pow(triangulo.c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(triangulo.l1==triangulo.l2 && triangulo.l2==triangulo.l3){
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((triangulo.l1 == triangulo.l2 && triangulo.l1 != triangulo.l3) || (triangulo.l1 == triangulo.l3 && triangulo.l1 != triangulo.l2) || (triangulo.l2 == triangulo.l3 && triangulo.l2 != triangulo.l1)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}