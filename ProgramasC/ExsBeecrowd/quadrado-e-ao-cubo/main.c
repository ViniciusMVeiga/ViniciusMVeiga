#include <stdio.h>
#include <math.h>
 
int main() {
    
    int n;
    scanf("%d",&n);
    
    int n2[n],n3[n];
    int i;
    
    
    for (i=1;i<=n;i++){
        n2[i]=pow(i,2);
        n3[i]=pow(i,3);
        
        printf("%d %d %d\n",i,n2[i],n3[i]);
    }
    
    return 0;
}