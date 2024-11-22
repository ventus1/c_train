#include <stdio.h>


int main(){
    int count = 0, x_count;
    long int x;
    char str[100];
    for (int i = 0; i < 100; i++){
        str[i] = '\0';
    }
    fgets(str, 100, stdin);
    for (int k = 0; str[k] != '\0'; k++){
        count = k;
    }
    //puts (str);
    //printf("%d\n",count);
    for (int i = count; i > 0; i--){
        if (i % 3 == 0){
            if ((count-i != 0) && (i != 0))
            printf(" ");
        }
        printf("%c", str[count - i]);
    }


        
    
}