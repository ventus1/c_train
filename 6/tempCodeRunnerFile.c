#include <stdio.h>

int main() {
    int temp,flag = 0;
    while (temp !=-9999){
        scanf("%d", &temp);
        if (temp == 2517){
            flag = 1;
        }
        if ((flag == 1) && (temp != -9999) && (temp != 2517)){
            printf("%d ",temp);
        }
        }
    }

    
