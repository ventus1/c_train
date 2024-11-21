#include <stdio.h>

int main(){
    char str1[100], str2[100];
    char modified[100];
    int count = 0, flag = 0, c_m = 0;
    
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    //printf("%d ", count);
    for (int i = 0; str1[i] != '\0'; i++){
            if (str1[i] != str2[i]){
                count ++;
            }
        }
    printf("%d", count);
    return 0;
}
