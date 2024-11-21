#include <stdio.h>
// 97 a -- 122 z
int main(void){
  int k,n;
  char x = 0;

  scanf("%d", &k);
  for (int i = 90-k+1; i <= 90; i++){
    printf("%c",i);
  }
  
}