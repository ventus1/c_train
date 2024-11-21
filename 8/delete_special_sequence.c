#include <stdio.h>

int main(){
    char str[100], modified[100];
    char x;
    int answer = -1, flag = 0;
    //scanf("%c ",&x);
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            //printf("%c %c\n", str[i], x);
            if ((str[i] != '/') && (str[i+1] != '*') && (flag != 0)){
                modified[i] = str[i];
                modified[i+1] = '\0';
                printf("%c",modified[i]);
            } else flag = 1;
            if ((flag == 1) && ((str[i] == '*') && (str[i+1] == '/'))){
                
            } else{
               flag = 0; 
               modified[i] = str[i];
               modified[i+1] = '\0';
               printf("%c",modified[i]);
            } 
        }
        
    }

    return 0;
}

