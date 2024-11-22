#include <stdio.h>

int square(int n, char c){
    for (int i = 0; i < n; i ++){
        for (int k = 0; k < n; k++){
            printf("%c",c);
        }
        printf("\n");
    }
}
int main (){
    int x,global;
    char ch;
    scanf("%d %c", &x, &ch);
    square(x,ch);

}