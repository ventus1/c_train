#include <stdio.h>

int main() {
    double pi = 3.1415926;
    double a,b,res;
    scanf("%lf",&a);
    b = 180/a;
    res = pi / b;
    printf("%lf", res);
    return 0;
}