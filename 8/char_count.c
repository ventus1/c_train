#include <stdio.h>
// 97 a -- 122 z
int main(void){
  int k,n;
  char x = 0;
  int count[26];
  for (int j = 0; j < 26; j++){
    count[j] = 0;
  }

  scanf("%d", &n);
  //printf("\n");
  for (int i = 0; i < n; i++){
    scanf(" %c", &x);
    if ((x <= 90) && (x >= 65)){
        x += 32;
    }
    x -= 97;
    count[x] += 1;
    //printf("%d %d ",count[x], x);
  }

    for (int j = 0; j < 26; j++){
    printf("%d ", count[j]);
  }
  return 0;
}