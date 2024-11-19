#include <stdio.h>

int main (){
    int s;
    scanf("%d", &s);
    for (int i = 1; i<= s;i++){
        for (int k = 1; k <= i; k++){
            printf("%d ", k);
        }
        printf("\n");
    }
}