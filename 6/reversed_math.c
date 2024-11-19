#include <stdio.h>
#include <math.h>
int main() {
    int n, k= 0,res = 0,temp;
    
    scanf("%d", &n);
    temp = n;
    while ((temp%10 == 0) && (temp > 0)){
        temp /= 10;
        printf("0");
    }

    temp = n;
    while (temp>0){
        temp = (int)(temp/10);
        k++;
    }
    
    for (int i = k; i > 0; i--){
        res += (int)(n%10)*(int)pow(10,i-1);
        //printf("%d ",(int)(n%10)*(int)pow(10,i-1));
        //printf("%d ", res);
        n /=10;
    }    
    
    printf("%d",res);

}