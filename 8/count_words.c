#include <stdio.h>

int main(){
    char str[100];
    int count = 1, flag = 0;
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if ((str[i] == ' ') && (flag == 0)) continue;
            else flag = 1;
            if ((str[i] == ' ') && (str[i-1] != ' ') && (str[i+1] != '\n')){
                count += 1;
                if (str[i] == '\n') {
                    str[i] = '\0';  
                    break;          
                }
            }
        }
        printf("%d",count);
    }

    return 0;
}

