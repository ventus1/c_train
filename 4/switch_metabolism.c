#include <stdio.h>
#include <locale.h>
int main(){
    int age,height,weight;
    char sex;
    scanf("%c %d %d %d",&sex, &age, &height, &weight);
    switch(sex){
        
        case 'm': printf("|  BMR  |\n|%6.2lf|",(float)10*weight + 6.25*height - 5*age + 5); break;
        case 'f': printf("|  BMR  |\n|%6.2lf|",(float)10*weight + 6.25*height - 5*age - 161);break;
        default : printf("ERROR"); break;
    }
    return 0;
}
