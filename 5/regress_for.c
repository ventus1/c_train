#include <stdio.h>

int main() {
    int a,b,s;
    s = 0;
    scanf("%d %d", &a,&b);
    for (int i = b; i >= a; i--){
        printf("%d ", i);
    }

    return 0;
}