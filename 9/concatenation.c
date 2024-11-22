#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[40] = "Hello, "; 
    char str2[20];    
    scanf("%s", str2);
    puts(strcat(str1,str2));


    return 0;
}