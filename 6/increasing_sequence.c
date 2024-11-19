#include <stdio.h>

int main() {
    int flag,k,temp = 0;
    int temp_prev = -9999;
    flag = 1;
    while (temp !=-9999){
        scanf("%d", &temp);
        if ((temp <= temp_prev) && (temp != -9999)){
            flag = 0;
        }
        temp_prev = temp;
    }
    if (flag == 1){
        printf("YES");
    }
    else printf("NO");
    
}