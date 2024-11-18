#include <stdio.h>

int main() {
    int a,border = 500, price = 350;
  scanf("%d", &a);
  if (a <= border)
      printf("%d",price);
    else
    printf("%d", (a - border) * 2 + price);
   
  return 0;
}