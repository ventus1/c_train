#include <stdio.h>

int main() {
    int a,b,c,d,e;
    
  scanf("%d %d %d %d %d", &a, &b, &c ,&d ,&e);
    b = (b+a)%26;
    c = (c+a)%26;
    d = (d+a)%26;
    e = (e+a)%26;
    printf("%d %d %d %d",b,c,d,e);
  return 0;
}