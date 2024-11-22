#include <stdio.h>

int main(){
    int a = 5, b = 2;
    int *p_1 = &a;
    int *p_2 = &b;
    double res;
    double *p_dbl = &res;
    * p_dbl = (double)*p_1 / *p_2;
    printf("%f",*p_dbl);

    return 0;
}



