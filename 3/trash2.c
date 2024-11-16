#include <stdio.h>

int main() {
    int x1,x2,x3,x4,x5,res;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    res = x1*x1 + x2*x2 + x3*x3 + x4*x4 + x5*x5;
    printf("%d",res);
    
    return 0;
}