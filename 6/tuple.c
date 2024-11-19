#include <stdio.h>

int main (){
    int s, temp;
    int temp_prev = 0;
    scanf("%d", &s);
    for (int i = 0; i<s;i++){
        
        scanf("%d", &temp);
        if (temp != temp_prev) printf("%d ", temp);
        temp_prev = temp;

    }
}