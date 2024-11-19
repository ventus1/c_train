#include <stdio.h>
#include <math.h>
int main() {
    int n,i = 1;
    int k = 0;
    scanf("%d", &n);
    if (n != 1){
    while (i < n){
        //printf("%d ",k);
        i *= 2;
        k ++;
        
    }
    printf("%d",k);
    }
    else printf("1");
}