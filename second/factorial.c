#include <stdio.h>
#include <math.h>
int main() {
    int k,i;
    long int fact;
    k = 1;
    while (k < 10)
    {
        i = k;
        fact = 1;
        while (i > 0){
        fact = fact * i;
        
        i--;
    }
    printf("%d! = %7.0d\n",k, fact);
    
    k++;
    }
    printf("10!= 3628800");
}