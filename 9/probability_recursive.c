#include <stdio.h>

int factorial(int n) {
    if ((n <= 1)) return 1;
    return n * factorial(n-1);
}

int main() {
    int n, k;
    scanf("%d %d",&n, &k);
    
    printf("%ld", factorial(n)/(factorial(k)*factorial(n-k)));
    return 0;

}