#include <stdio.h>
#include <math.h>
int main() {
    int seconds,hours,minutes;
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    printf("%d %d", hours, minutes);
  return 0;
}