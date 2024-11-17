#include <stdio.h>
#include <math.h>
int main() {
    double x;
  scanf("%lf", &x);
    x = 7.5*pow(10,10)*exp((-log(2)/5570)*x);

    printf("%.2lf",x/pow(10,9));
  return 0;
}