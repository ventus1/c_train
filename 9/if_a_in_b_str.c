#include <stdio.h>
#include <string.h>

int main() {
    int sum1 = 0,sum2 = 0, x = 0, count_str2 = 0, len_str2 = 0;
    char str1[50];
    char str2[50];
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    
    len_str2 = strlen(str2) ;
    for (int i = 0; str2[i] != '\0'; i++){
        for (int k = 0; str1[k] != '\0'; k++){
            if( str2[i] == str1[k]) {
                count_str2 +=1;
                //str1[k] = '0';
                //printf("\n%c %c", str2[i], str1[k]);
                break;
                }
        }

        
    }
    if (count_str2 == len_str2){
        printf("yes");
    }else{
        //printf("%d %d", count_str2, len_str2);
        printf("no");
    }
    
}