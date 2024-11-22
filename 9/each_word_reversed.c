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
            //printf("%c",word[j]);
            j++;
            i++;
        }
        for (int k = 0; k < j-1; k++){
            
            
        }
        for (int k = j-1; k >= 0; k--){
            // printf("%d %d %c\n",j-1, k,word[k]);
            printf("%c",word[k]);
        }
        printf(" ");

        j = 0;

    }
    

}