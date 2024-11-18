#include <stdio.h>
#include <math.h>
int main() {
    long int a1,a2,b1,b2,sum1,sum2;
    scanf("%ld %ld\n %ld %ld",&a1,&a2,&b1,&b2);
    //printf("%d %d\n %d %d",a1,a2,b1,b2);
    sum1 = sqrt(pow(a1,2) + pow(a2,2));
    sum2 = sqrt(pow(b1,2) + pow(b2,2));
    if (sum1 < sum2) printf("1");
    else
    if (sum1 == sum2) printf("0");
    else
    printf("2");
    
    return 0;
}