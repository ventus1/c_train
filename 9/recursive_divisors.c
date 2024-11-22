#include <stdio.h>

int factor(int n, int i){
if ((n % i == 0 )){
    printf("%d ",i);
}
if (i <= n) return factor(n,i+1);
}

int main() {
    int n,count;
    count = 0;
    n = 12;
    factor(n,1);
    return 0;
}
    
