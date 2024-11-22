#include <stdio.h>
#include <ctype.h>



int main() {
    char str[20];
    int integer;
    int dot = 0;
    int flag = 3;
    int negative = 0, count = 0;
    // 0 - error, 1 - int, 2 - float
    fgets(str,20, stdin);
    for (int i = 0; str[i] != '\n'; i++){
        
        count +=1;
    }

    //str[count+1] = '\0';
    // for (int i = 0; str[i] != '\0'; i++){
    //     printf("\n%c count %d",str[i], count);
    //     //count +=1;
    // }
    for (int i = 0; i < count+1; i++){
        if ((str[0] == 45) && (negative == 0)){
            negative = 1;
            continue;
        }
        
        if (str[0] == 46){
            printf("error");
            flag = 0;
            return 0;
        }
        if ((str[i] >= 46) && (str[i] <= 57) && (flag != 0)){
            while (i < count+1){
                if (str[i] == 45){
                    flag = 0;
                    printf("error");
                    return 0;
                }
                i++;
                
                if ((str[i] == 46) && (str[0] != 46)){
                    dot+=1;
                    //printf("\n dot added %d ",i);
                    if (dot >=2){
                        flag = 0;
                        printf("error");
                        return 0;
                    }
                    if ((str[i+1] <46) || (str[i+1] > 57)){
                        printf("error");
                        flag = 0;
                        return 0;
                    }
                }
                
                
                }
            }
            else{
                printf("error");
                flag = 0;
                return 0;
            }
            //printf("%d\n",str[i]);
                if ((str[i] < 48) && (str[i] > 32) || (str[i] > 57)){
                    flag = 0;
                    printf("error");
                    return 0;
        }
    }
    if (dot == 1){
        flag = 2;

    }
    else{
        flag = 1;
    }
    switch (flag){
        case 0: printf("error"); break;
        case 1: printf("int");break;
        case 2: printf("float");break;
        default: printf("error");break;
    }
    //printf("\nfinal %d",flag);
}