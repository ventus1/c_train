#include <stdio.h>

int factorial(n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int main() {
    long int n;
    scanf("%ld",&n);
    if (n == 0){
        printf("1");

    }else{
    printf("%ld", factorial(n));}
    return 0;

}