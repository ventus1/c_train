#include <stdio.h>

int main() {
  int sum,a,sum2;
  sum2 = 0;
    scanf("%d", &sum);
    
    while (sum > 0){
    a = sum % 10;
    //printf("%d ",a);
    sum = sum / 10;
    sum2 += a;
    }
    printf("%d ",sum2);
  return 0;
}