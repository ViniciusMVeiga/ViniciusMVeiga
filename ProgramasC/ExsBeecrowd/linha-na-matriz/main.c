#include <stdio.h>
#define n 12

int main()
{
    int line;
    char op;
    double M[n][n];
    double soma=0;
    double media;
    int i;
    int j;
    
    scanf("%d",&line);
    scanf("%*c%c",&op);
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    
    for (j=0;j<n;j++){
        soma=soma+M[line][j];
    }
    
    if (op=='S'){
        printf("%lf",soma);
    }
    else if (op=='M'){
        media=soma/n;
        printf("%lf",media);
    }
}

