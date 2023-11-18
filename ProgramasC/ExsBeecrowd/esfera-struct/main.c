#include <stdio.h>
#define pi 3.14159

typedef struct{
    double volume, raio;
} strEsfera;

int main() {
    strEsfera esfera;
    scanf("%lf",&esfera.raio);
    esfera.volume=((4/3.0) * pi * esfera.raio*esfera.raio*esfera.raio);
    printf("VOLUME = %.3lf\n",esfera.volume);
    
 
    return 0;
}