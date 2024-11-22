#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[40]; 
    char str2[5];    
    char dot[5] = ".";
    //scanf("%s\n%s", &str1,&str2);
    fgets(str1,40,stdin);
    fgets(str2,10,stdin);
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';
    //printf("dlina %d ", strlen(str1));
    strcat(dot,str2);
    strcat(str1,dot);

    puts(str1);

    return 0;
}