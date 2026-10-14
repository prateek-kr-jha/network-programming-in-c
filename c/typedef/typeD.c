#include <stdio.h>

typedef struct {
    char *name;
    int leg_count, speed;
} animal;

typedef struct  
{
    int x, y;
} point;


// typedef struct animal animal;



int main(void)
{
    point p = {.x=20, .y=40};
    printf("%d, %d\n", p.x, p.y);
}