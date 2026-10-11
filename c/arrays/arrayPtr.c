#include <stdio.h>
// address &
// int address variable = int* ;
// int dereferencing variablr = 8
int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};

    int *p;

    p = a;

    printf("%d\n%d\n", *p, *a);
}