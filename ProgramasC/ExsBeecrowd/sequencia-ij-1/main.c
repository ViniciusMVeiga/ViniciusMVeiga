#include <stdio.h>
 
int main() {
    
    int i=-2,j;
    
    for(j=60;j>-1;j=j-5){
        i=i+3;
        printf("I=%d J=%d\n",i,j);
    }
    
    return 0;
}