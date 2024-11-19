#include <stdio.h>

int main() {
    int temp,    res = 0, flag = 0, k = 1;
    int temp_prev = -9999;
    while (temp !=-9999){
        scanf("%d", &temp);
        if ((temp <= temp_prev) && (temp != -9999)){
            
            flag = 1;
            res = k;
            //printf("%d - k,%d,%d flag",res,temp,temp_prev);
            break;
        }
        temp_prev = temp;
        k++;
    }
    if (flag == 1){
        printf("%d",res);
    }
    else printf("0");
    
}