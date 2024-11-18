#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    int a;
    scanf("%d",&a);
    if (a >= 60)
    printf("пенсионер");
    if ((a >= 19) && (a <= 59))
    printf("рабочий");
    if ((a >= 7) && (a <= 18))
    printf("школьник");
    if ((a <= 6))
    printf("дошкольник");
  return 0;
}