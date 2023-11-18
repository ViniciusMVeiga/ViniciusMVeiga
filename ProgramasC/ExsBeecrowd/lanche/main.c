#include <stdio.h>
 
int main() {
    
    int c, n;
    double p;
    
    scanf("%d %d",&c,&n);
    
    if (c==1){
        p = n*4.0;
    }
    else if (c==2){
        p = n*4.5;
    }
    else if (c==3){
        p = n*5.0;
    }
    else if (c==4){
        p = n*2.0;
    }
    else if (c==5){
        p = n*1.5;
    }
    
    printf("Total: R$ %.2lf\n",p);
    
    return 0;
}