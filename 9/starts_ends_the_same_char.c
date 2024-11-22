#include <stdio.h>

int main(){
    int count = 0,j=0,k=0;
    char str[50];
    char word[50];
    fgets(str, 100, stdin);
        while (str[count] != '\0'){
            count ++;

        }
    count --;
    for (int i = 0; i < count; i++){
        while ((str[i] != ' ') && (str[i] != '\n')){
            word[j] = str[i];
            j++;
            i++;
        }
        if (word[0] == word[j-1]) {
            for (int k = 0; k < j; k++){
                printf("%c",word[k]);
            }
            printf(" ");
        }
        j = 0;

    }
    

}