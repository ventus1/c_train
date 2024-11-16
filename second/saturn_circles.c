#include <stdio.h>
#include <math.h>
int main() {
    int radius_in, radius_out, wideness;
    double square;
    double pi = 3.14159265358979323846;
    scanf("%d %d", &radius_in, &radius_out);
    wideness = radius_out - radius_in;
    square = fabs(pow(radius_in,2) * pi - pow(radius_out,2)*pi);
    printf("%d %.2lf", wideness, square*100);
  return 0;
}