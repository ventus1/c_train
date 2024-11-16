#include <stdio.h>
#include <math.h>
int main() {
  int x, x1,x2,x3,x4,x5,b,sums,i=0;
  x = 0;
  sums = 0;
  scanf("%d %d %d %d %d", &x1,&x2,&x3,&x4,&x5);
  x = fabs(x1);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  //printf("%d\n", sums);
  sums += x;
  

  x = fabs(x2);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  sums += x;
  //printf("%d\n", sums);
  
  x = fabs(x3);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  sums += x;
  //printf("%d\n", sums);

  x = fabs(x4);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  sums += x;
  //printf("%d\n", sums);

  x = fabs(x5);
  x %= 10;
  x %= 2;
  x *= 2;
  x --;
  x *= -1;
  sums += x;
  printf("%d\n", sums*(-1));
  
  return 0;
}