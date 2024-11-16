#include <stdio.h>
#include <math.h>
int main() {
  int binary,res,sum,a,i;
  i = 0;
  sum = 0;
    scanf("%d", &binary);
    while (binary > 0){

        a = binary %10;
        binary /= 10;
        sum += pow(2,i)*a;
        //printf("%d\n", pow(2,i)*a);  
        i++;
    }
    printf("%d\n", sum);
  return 0;
}