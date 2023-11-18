#include <stdio.h>
 
int main() {
    
    int n;
    int s;
    int min;
    int h;
    
    scanf("%d",&n);
    
    h=n/3600;
    min=(n/60)%60;
    s=n%60;
    
    printf("%d:%d:%d",h,min,s);
    
    return 0;
}