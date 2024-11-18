#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a != b && a != c && b != c)
        if ((a == 2 || a == 4 || a == 8) && (b == 2 || b == 4 || b == 8)&& (c == 2 || c == 4 || c == 8))
            printf("open"); else printf("closed");
    else printf("closed");     
    
        
    return 0;
}