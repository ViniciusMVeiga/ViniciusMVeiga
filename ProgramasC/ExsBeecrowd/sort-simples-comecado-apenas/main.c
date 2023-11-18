#include <stdio.h>

int main() {
    
    int x1,x2,x3;
    
    scanf("%d %d %d",&x1,&x2,&x3);
    
    if(x1<=x2 && x1<=x3 && x2<=x3){
        printf("%d\n%d\n%d\n",x1,x2,x3);
    }
    if(x1<=x2 && x1<=x3 && x3<=x2){
        printf("%d\n%d\n%d\n",x1,x3,x2);
    }
    if(x2<=x1 && x2<=x3 && x1<=x3){
        printf("%d\n%d\n%d\n",x2,x1,x3);
    }
    if(x2<=x1 && x2<=x3 && x3<=x1){
        printf("%d\n%d\n%d\n",x2,x3,x1);
    }
    if(x3<=x1 && x3<=x2 && x1<=x2){
        printf("%d\n%d\n%d\n",x3,x1,x2);
    }
    if(x3<=x1 && x3<=x2 && x2<=x1){
        printf("%d\n%d\n%d\n",x3,x2,x1);
    }
    
    printf("\n%d\n%d\n%d\n",x1,x2,x3);
    return 0;
}