#include <stdio.h>
#include <math.h>
int main() {
    long int k, cheat;
    scanf("%lu", &k);
    cheat = k*1000*1000*1000;
    k = k*1024*1024*1024;
    printf("%lu", k - cheat);
    return 0;
}