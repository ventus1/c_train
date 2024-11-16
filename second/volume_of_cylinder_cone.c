#include <stdio.h>
#include <math.h>
int main() {
    double pi = 3.14159265358979323846;
  double radius, h, volume1, volume2;
    scanf("%lf %lf", &radius, &h);
    volume1 = radius * radius * pi * h;
    volume2 =  radius * radius * pi * h / 3;
    printf("%5.2lf %5.2lf", volume1, volume2);
  return 0;
}