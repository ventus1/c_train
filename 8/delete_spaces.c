#include <stdio.h>

int main(){
    char str[100];
    char modified[100];
    int count = 0, flag = 0, c_m = 0;
    for (int k = 0; modified[k] != '\0'; k ++){
        modified[k] = '0';
    }
    fgets(str, 100, stdin);
        while (str[count] != '\0'){
            count ++;

        }
    //printf("%d ", count);
    for (int i = 0; i < count; i++){
        if (str[i] != ' ' || str[i-1] != ' ') {
            printf("%c", str[i]);
            flag = 1;
        }
    }

    return 0;
}
