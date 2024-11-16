#include <stdio.h>

int main() {
    int x,c;
    scanf("%d",&x);
    
    c = x % 3600 % 60;
    printf("%d", c);
    return 0;
}