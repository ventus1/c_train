#include <stdio.h>
#include <math.h>
int main(void) {
    int  elder, younger;
    double vol,m,n;
    scanf("%lf %lf", &m, &n);
    vol = m/n;
    //printf("%lf\n", vol);
    younger = (int)vol % 10;
    elder = (int)(vol * 10) % 10;

    printf("%d %d", younger, elder);
    return 0;
}