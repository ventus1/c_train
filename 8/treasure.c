#include <stdio.h>

int main(){
    int x = 0,y = 0, n, number = 0,k = 0, last_count = 0;
    char raw_word[30], word[30];
    char ch = '0';
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        
        scanf(" %c%*[^ ]%d", &ch, &number);
        
        switch (ch){
            case 'N': y += number;break;
            case 'E': x += number;break;
            case 'S': y -= number;break;
            case 'W': x -= number;  break;
            default: printf("\nerror\n");break;
        }
        
        
    }
    printf("%d %d",x,y);
    return 0;
    
}