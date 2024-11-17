#include <stdio.h>

int main() {
    int i,x,k,sum, a;
    i = 0;
    scanf("%d\n%d",&k,&x);
sum = 1;
    while (x > 0){
        a = x%10;
        x = x/10;
        sum *=a;
    }
    printf("%d",sum);
    return 0;
}