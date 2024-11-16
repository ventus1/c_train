#include <stdio.h>

int main() {
    int a,c,a1,a2,a3,a4;
     scanf("%d",&a);
    a4 = a %10;
    a /= 10;
    a3 = a %10;
    a /= 10;
    a2 = a %10;
    a /= 10;
    a1 = a %10;
    a /= 10;

    c = a1;
    a1 = a3;
    a3 = c;

    c = a2;
    a2 = a4;
    a4 = c;

    a4 = (a4+10-7)%10;
    a /= 10;
    a3 = (a3+10-7)%10;
    a /= 10;
    a2 = (a2+10-7)%10;
    a /= 10;
    a1 = (a1+10-7)%10;
    ;
    printf("%d%d%d%d",a1,a2,a3,a4);
  return 0;
}