#include <stdio.h>
 
int main() {
    
    int n;
    int i;
    
    do {
        scanf("%d",&n);
        
        for(i=1;i<=n;i++){
            printf("%d",i);
            if (i!=n){
                printf(" ");
            }
        }
        printf("\n");
    } while(n!=0);
    
    return 0;
}
