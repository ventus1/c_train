#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int a,b;
    char operator;
    scanf("%d %d %c",&a, &b, &operator);
    //printf("%d %d\n",a,b);
    switch(operator){
        
        default : printf("ERROR!");break;
        case '+': printf("%.2f",(float)a+b); break;
        case '-': printf("%.2f",(float)a-b); break;
        
        case '*': printf("%.2f",(float)a*b); break;
        case '/': switch(b){
            case 0: printf("ERROR!");break;
            default: printf("%.2f",(float)(a/b)); break;
        }

        // printf("%.2f",(float)(a/b)); break;
    }
    return 0;
}
