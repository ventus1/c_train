#include <stdio.h>

int main() {
    int a,curr,fib_prev,fib_prev2;
    curr = 1;
    fib_prev = 1;
    fib_prev2 = 1;
    scanf("%d", &a);
    if (a >=3 ){
    for (int i = 3; i <= a; i++){
        fib_prev2 = fib_prev;
        fib_prev = curr;
        curr = fib_prev2 + fib_prev;
        
    }printf("%d ",curr);
    }else{
        printf("1 ");
    }
    
    return 0;
}