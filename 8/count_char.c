#include <stdio.h>
// 97 a -- 122 z
int main(void){
  int k,n, count;
  count = 0;
  char str[30];
  for (int i = 0; i <= 30; i++)
    str[i] = 0;
  fgets(str, 30, stdin);
  //puts(str);
  for (int i = 0; i<=30; i++){
    if ((str[i] != 0) && (str[i] != 10)) {
      
      count += 1;
    }
  }
  printf("%d ", count);
  
}