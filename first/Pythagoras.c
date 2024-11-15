#include <math.h>
#include <stdio.h>
int main() {
    double a,b,c,d,res,x3,y3;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    x3 = a-c;
    x3 = fabs(x3);
    y3 = b-d;
    y3 = fabs(y3);
    res = sqrt(pow(x3,2) + pow(y3,2));
    printf("%5.2lf", res);
    return 0;
}