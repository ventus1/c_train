#include <stdio.h>

int main() {
 int sum = 0,temp = 0,flag = 0;
    while (temp !=-9999){
        scanf("%d", &temp);
        if ((temp == 0) && (temp != -9999)){
            flag+=1;
        }
        if (flag == 1){
            sum+=temp;
        }
        if (flag == 2){
            break;
        }
        
    }
        printf("%d", sum);
        return 0;
    }
  
