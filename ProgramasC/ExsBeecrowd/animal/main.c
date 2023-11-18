#include <stdio.h>
#include <string.h>
#define TamP 50
 
int main() {
    
    char p1[TamP], p2[TamP],p3[TamP];
    short int v1,v2,v3;
    
    
    fgets(p1,TamP,stdin);
    fgets(p2,TamP,stdin);
    fgets(p3,TamP,stdin);
    
    if (strcmp(p1,"vertebrado\n") == 0){
        if (strcmp(p2,"ave\n") == 0){
            if (strcmp(p3,"carnivoro\n")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if (strcmp(p3,"onivoro\n")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if (strcmp(p2,"inseto\n")==0){
            if(strcmp(p3,"hematofago\n")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if (strcmp(p3,"hematofago\n")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}
