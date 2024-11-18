#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    switch (b){
    case 2: if (a <= 29)
    printf("correct");
    else
    printf("error");
    break;
    default: 
        if ((a <= 31) && (b <= 12))
        if (((b <= 7) && (b % 2 == 0) && (a <= 30)) || ((b <= 7) && (b % 2 == 1) && (a <= 31)))
        printf("correct");
        else
        if (((b >= 8) && (b % 2 == 1) && (a <= 30 )) ||((b >= 8) && (b % 2 == 0) && (a <= 31 )))
        printf("correct");
        else
        printf("error"); break;
    }
    return 0;
    
}