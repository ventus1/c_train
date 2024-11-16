#include <stdio.h>
#include <math.h>
int main() {
  int numeral,res,sum,a,i,bit;
  i = 0;
  sum = 0;
    scanf("%d %d",&bit, &numeral);
    while (numeral > 0){

        a = numeral %10;
        numeral /= 10;
        sum += pow(bit,i)*a;
        
        i++;
    }
    printf("%d\n", sum);
  return 0;
}