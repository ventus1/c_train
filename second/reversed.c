#include <stdio.h>
#include <math.h>
int main(void){
    int k, reversed, a1,a2,a3;
    scanf("%d", &k);
    a1 = k%10;
    k = k/10;

    a2 = k%10;
    k = k/10;

    a3 = k%10;
    k = k/10;

    //printf("%d %d %d", a1,a2,a3);
    reversed = a1*100 + a2*10 + a3;
    printf("%d", reversed);
}