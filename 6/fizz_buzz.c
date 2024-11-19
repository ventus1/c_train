#include <stdio.h>
#include <math.h>
int main(void) {
  int a;
  for (int i = 1; i <= 100; i++){
    if (i % 15 == 0){
        printf("FizzBuzz ");
        }
        else
        {
        if (i % 3 == 0){
            printf("Fizz ");
        } else
        if (i % 5 == 0){
            printf("Buzz ");
        } else
        printf("%d ",i);
        }
  }

  return 0;
}