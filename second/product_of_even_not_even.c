#include <stdio.h>
#include <math.h>
int main() {
  int even1, even2, n_even1, n_even2,k;
  float res;
  scanf("%d", &k);
  
  n_even2 = k % 10;
  k = k/10;

  even2 = k % 10;
  k = k/10;

  n_even1 = k % 10;
  k = k/10;

  even1 = k % 10;
  k = k/10;
  res = (float)(even1 * even2) / (float)(n_even1 * n_even2);
  printf("%.2f",res);
  return 0;
}