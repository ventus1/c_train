#include <stdio.h>

int main() {
    int a,fac;
    fac = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        fac *= i;
    }
    printf("%d",fac);
    return 0;
}