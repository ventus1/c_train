#include <stdio.h>

int main() {
    int a,b,s;
    s = 0;
    scanf("%d %d", &a,&b);
    if (a < 0){
        a = 0;
    }
    for (int i = a; i <= b; i++){
        if (i > 0){
        printf("%d ", i);
        s+=1;}
    }
    printf("\n%d", s);
    return 0;
}