#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[50]; 
    char str2[50];    
    
    //scanf("%s\n%s", &str1,&str2);
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    //printf("govno %c", str1[strlen(str1)-2]);
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';
    //printf("dlina %d ", strlen(str1));
   // printf("%c%c | %c%c", str1[strlen(str1)-1]-32, str2[0],str2[strlen(str2)-1]-32,str1[0]) ;
    if ((str2[0] == str1[strlen(str1)-1]-32) || (str1[0] == str2[strlen(str2)-1]-32)) {
        printf("yes");
    }else printf("no");

    //puts(str1);

    return 0;
}