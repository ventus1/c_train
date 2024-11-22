#include <stdio.h>
#include <string.h>

int main() {
    int sum1 = 0,sum2 = 0, x = 0;
    char str[8];
    
    fgets(str,8,stdin);
    for (int i = 0; i < 3; i++){
        x = str[i] - '0';
        sum1 += x;
        
    }
    for (int i = 3; i < 6; i++){
        x = str[i] - '0';
        sum2 += x;
        
    }
    if (sum1 == sum2){
        printf("yes");
    }else printf("no");
}