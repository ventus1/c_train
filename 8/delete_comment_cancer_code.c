#include <stdio.h>

int main(){
    char str[100], modified[100];
    char x;
    int answer = -1, nashlos = 0, j = 0;
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if ((str[i] == '/') && (str[i+1] == '*')){
                nashlos = i;
                i+=2;
                while (!((str[i] == '*')  && (str[i+1] == '/'))){
                    if (str[i] == '\0') {
                        for (int k = nashlos; str[k] != '\0'; k ++){
                            modified[j] = str[k];
                            modified[j+1] = '\0';
                            j++;
                        }
                        break;
                    }
                    i ++;
                }
                i++;
            } else {
                modified[j] = str[i];
                j++;
            }
        }
    }
    for (int i = 0; modified[i] != '\n'; i ++){
        printf("%c",modified[i]);
    }
    return 0;
}

