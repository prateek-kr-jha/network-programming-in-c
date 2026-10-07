#include <stdio.h>

int plus_one(int);

int main(void) 
{
    int i = 10, j;

    j = plus_one(i);

    printf("i = %d and j = %d\n", i, j);
}

// parameter is a special type of local variable that copies the arguments
int plus_one(int n)
{
    return n + 1;
}
