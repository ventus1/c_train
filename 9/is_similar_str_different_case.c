#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[50]; 
    char str2[50];    
    int similar = 1;
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    for (int i = 0; str1[i] != '\0'; i++){
        if ((str1[i] >= 65) && (str1[i] <=90)){
            //printf("%c %c\n",str1[i], str1[i] + 32);
            str1[i] = str1[i] + 32;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++){
        if ((str2[i] >= 65) && (str2[i] <=90)){
            //printf("%c %c\n",str2[i], str2[i] + 32);
            str2[i] = str2[i] + 32;
        }
    }
    int flag = strcmp(str1,str2);
    //printf("%d",flag);
    if (flag == 1){
        for (int i = 0; str1[i] != '\0'; i++){
            if (str1[i] != str2[i]) {
                similar = 0;
            }
        }
    
    }else{
        for (int i = 0; str2[i] != '\0'; i++){
            if (str1[i] != str2[i]) {
                similar = 0;
            }
        }
    }
    if (similar){
        printf("yes");
    }
    else printf("no");
    

    return 0;
}