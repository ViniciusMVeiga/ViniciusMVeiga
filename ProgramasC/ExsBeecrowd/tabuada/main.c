#include <stdio.h>
 
int main() {
    
    int n;
    int i;
    int r;
    
    scanf("%d",&n);
    for(i=1;i<11;i++){
        r=n*i;
        printf("%d x %d = %d\n",i,n,r);
    }
    
    return 0;
}