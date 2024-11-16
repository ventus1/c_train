#include <stdio.h>
#include <math.h>
int main() {
  int x,b;
  scanf("%d", &b);
  x = fabs(b);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  printf("%d", x);
    
  return 0;
}