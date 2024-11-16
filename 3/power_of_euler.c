#include <math.h>
#include <stdio.h>
#include "euler.h" // Include the header file
int main() {
    int x;
    scanf("%d", &x);
    // recieving e3 from euler.c
    double e3 = (float)(1 + x/1 + pow(x,2)/2 + pow(x,3)/6 + pow(x,4)/24 + pow(x,5)/120);
    
    printf("%.6lf %.6lf", exp(x), e3);
    return 0;
}