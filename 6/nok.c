#include <stdio.h>

int main() {
    int a,b,res;
    scanf("%d %d", &a, &b );
    for (int i = 1; i <= a*b; i++){
        if ((i % a == 0) && (i % b == 0)){
            res = i;
            break;
        }
    }printf("%d", res);
    
    return 0;
}