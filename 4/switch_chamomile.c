#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int k,res;
    
    scanf("%d",&k);
    res = k%2;
    switch(res){
        default : break;
        case 0: printf("Не любит"); break;
        case 1: printf("Любит");break;
    }
    return 0;
}
