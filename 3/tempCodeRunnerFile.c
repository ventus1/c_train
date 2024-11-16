#include <stdio.h>

int main() {
    float c,a,b;
    scanf("%f %f", &a, &b);
    a = 12 * a;
    c = (float)(25.4 * b) + (a * 25.4);
    c /= 1000;
    printf("%2.2f",c);
    return 0;
}