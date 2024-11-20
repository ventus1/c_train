#include <stdio.h>
#include <math.h>

int factorial(k){
    if (k != 1) {
    int res = 1;
    for (int i = 1; i <= k; i++){
        res *= i;
    }
    //printf("%d",res);
    return res;
    } else return 1;
}

int main() {
    int i=0;
    double res;
    double e;
    int len;
    scanf("%lf", &e);;
    //printf("%d",factorial(3));
    res = 1;
    while ((double)1/(int)factorial(i) >= e) {
        i++;
        res += (double)1/(int)factorial(i);
        
    }
    printf("%1.8lf\n",res);
    return 0;
}