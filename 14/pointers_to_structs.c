#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

//Long syntax
void move(point * p) {
    (*p).x++;
    (*p).y++;
}

//Short syntax;
void move1(point * p) {
    p->x++;
    p->y++;
}

int main(){

    //Long syntax

    point p;
    p.x = 0;
    p.y = 0;
    move(&p);
    printf("%d %d\n", p.x, p.y);
    
    
    //Short syntax;

    point p1;
    p1.x = 0;
    p1.y = 0;
    move(&p1);
    printf("%d %d", p1.x, p1.y);
    
    return 0;
}

