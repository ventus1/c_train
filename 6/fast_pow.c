#include <stdio.h>
#include <math.h>
int main(void) {
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res = a;
//пока степень больше нуля
  while(k > 1){
// если степень чётная, то
    if (k%2 == 0){   //res 4 8 16 32
      res = res*pow(a,k/2); // умножаем текущий результат на себя
      k = k/2; // степень делим пополам
    }else { //если степень нечётная
      res = res * a; // то умножаем на исходное число
      k = k - 1;   // от степени вычитаем единицу
   }
 }
  printf("%d\n", res);
  return 0;
}