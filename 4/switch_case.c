#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
  char s;  
  scanf("%lc",&s);

  switch (s) {
    default  : break;
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
    
  }

  return 0;
}