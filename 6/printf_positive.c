#include <stdio.h>

int main() {
    int s;
    s = 1;
    while (s != 0){
        scanf("%d ", &s);
        if (s > 0){
            printf("%d ", s);
        }
    }
}