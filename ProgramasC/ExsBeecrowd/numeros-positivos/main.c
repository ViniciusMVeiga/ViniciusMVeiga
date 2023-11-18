#include <stdio.h>
 
int main() {
    
    int i;
    double l;
    int n=0;
    
    for(i=0;i<6;i++){
        scanf("%lf",&l);
        if(l>0){
            n++;
        }
    }
    printf("%d valores positivos\n",n);
    
    return 0;
}