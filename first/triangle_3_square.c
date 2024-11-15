#include <math.h>
#include <stdio.h>
int main() {
    double a,b,c,res,p;
    scanf("%lf %lf %lf",&a,&b,&c);
    p = (a + b + c) / 2;
    res = sqrt(p*(p-a)*(p-b)*(p-c))
    printf("%5.2lf", res);
    
    return 0;
}