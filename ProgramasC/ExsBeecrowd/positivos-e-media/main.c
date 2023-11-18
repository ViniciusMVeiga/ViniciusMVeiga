#include <stdio.h>
#define valsLidos 6
 
int main() {
    
    int i;
    double l,soma=0,media;
    int n=0;
    
    for(i=0;i<valsLidos;i++){
        scanf("%lf",&l);
        if(l>0){
            soma=soma+l;
            n++;
        }
    }
    printf("%d valores positivos\n",n);
    
    media=soma/n;
    printf("%.1lf\n",media);
    
    return 0;
}
