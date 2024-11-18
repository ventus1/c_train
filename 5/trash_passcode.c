#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == 1 && b == 0 && c == 2 && d == 4)
        printf("open");
    else
        printf("closed");
    return 0;
}