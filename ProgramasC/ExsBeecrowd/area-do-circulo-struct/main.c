#include <stdio.h>
#define n 3.14159

typedef struct {
    double raio, area;
} strCirculo;

int main() {
    
    strCirculo circulo;
    
    scanf("%lf",&circulo.raio);
    circulo.area=n*circulo.raio*circulo.raio;
    printf("A=%.4lf\n", circulo.area);

    return 0;
}