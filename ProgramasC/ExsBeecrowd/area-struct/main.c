#include <stdio.h>
#define pi 3.14159

typedef struct {
    double a,b,c,D,E,F,G,H;
} strValores;
int main()
{
    strValores valores;
    scanf("%lf",&valores.a);
    scanf("%lf",&valores.b);
    scanf("%lf",&valores.c);
    
    valores.D = (valores.a*valores.c)/2;
    printf("TRIANGULO: %.3lf\n",valores.D);
    
    valores.E = valores.c*valores.c*pi;
    printf("CIRCULO: %.3lf\n",valores.E);
    
    valores.F = ((valores.a+valores.b)/2)*valores.c;
    printf("TRAPEZIO: %.3lf\n",valores.F);
    
    valores.G = valores.b*valores.b;
    printf("QUADRADO: %.3lf\n",valores.G);
    
    valores.H = valores.a*valores.b;
    printf("RETANGULO: %.3lf\n", valores.H);
    
    

    return 0;
}