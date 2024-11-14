#include <math.h>
#include <stdio.h>
int main() {
    double a,b,c,res,x;
    scanf("%lf %lf %lf",&a,&b,&c);
    x = 3.141593/180 * c;
    res = 0.5 * a * b * sin(x);
    printf("%5.2lf", res);
    return 0;
}