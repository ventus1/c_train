#include <stdio.h>

int main() {
    float c,a1,b1,a,b;
    scanf("%f %f", &a1, &b1);
    a = 12 * a1;
    c = (float)(25.4 * b1) + (a * 25.4);
    c /= 1000;
    printf("%.0f\'%.0f\" = %2.2f m",a1,b1,c);
    return 0;
}