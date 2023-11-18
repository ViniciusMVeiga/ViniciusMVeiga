int main() {
    
    int a,b;
    int r;
    
    scanf("%d %d",&a,&b);
    
    if (a>=b){
        r=a%b;
    }
    if (a<b){
        r=b%a;
    }
    if(r==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}