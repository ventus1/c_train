#include <stdio.h>
#include <math.h>

int main() {
    double x;
  scanf("%lf", &x);
    x = 1.29 * exp(-x*1.25*pow(10,-4)) ;
  printf("%.2lf", x);
    return 0;
}