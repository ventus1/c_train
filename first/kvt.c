#include <stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    //printf("%ld %ld %ld", a,b,c);
    printf("%lf", (b-a) * c);
}