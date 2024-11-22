#include <stdio.h>

#include <string.h>
void print_date(int d, int m, int y, int k){
    char buffer[10];
    switch (k){
        case 0:    
        sprintf(buffer, "%02d.%02d.%d", d, m, y);
        //puts(buffer);
        buffer[strlen(buffer)-4] = buffer[strlen(buffer)-2];
        buffer[strlen(buffer)-3] = buffer[strlen(buffer)-1];
        buffer[strlen(buffer)-2] = '\0';
        printf("%s",buffer);
        break;
        case 1: printf("%02d.%02d.%d",d,m,y); break;
        case 2: 
        sprintf(buffer, "%d/%02d/%02d", y, m, d);
        puts(buffer);
        //printf("",d,m,y); break;
    }
}
int main(){ 
    int d,m,y,k;
    //char str1[] = "26 12 2017 2", str2[] = "7 11 1917 1";
    //fgets(str, 10, stdin);
    //sscanf(str1, "%d %d %d %d",&d,&m,&y,&k); 
    scanf("%d %d %d %d",&d,&m,&y,&k);
    print_date(d,m,y,k);
    return 0;
}