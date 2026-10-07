#include <stdio.h>

void increment(int*);

int main(void) 
{
    int i = 10;
    int *p = &i;

    printf("i = %d\n", i);
    printf("i is also = %d\n", *p);

    increment(p);
    printf("now i = %d\n", i);

}

void increment(int *p)
{
    *p = *p + 1;
}