#include <stdio.h>

int main() {
    int a,b,c,k;
  scanf("%d %d %d", &a, &b, &c);
   k = (b+c)%a;
    printf("%d",k); 
  return 0;
}