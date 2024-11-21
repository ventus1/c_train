#include <stdio.h>

int main(){
    char str[100];
    char x;
    int answer = -1;
    scanf("%c ",&x);
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            //printf("%c %c\n", str[i], x);
            if (str[i] == x){
                answer = i;
            }
        }
        printf("%d",answer);
    }

    return 0;
}

