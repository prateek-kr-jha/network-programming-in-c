#include <stdio.h>

// &: address of operator -> operator do you suppose we’d use to find the address of 
// int*: integer pointer
// address of a type can be stored in a pointer of that type
// seprate kind of *:(indirection operator,) dereference operator

int main(void)
{
    int i = 10;
    int* p = &i;
    *p = 20;

    printf("The value of i is %d\n", i);
    printf("The value of *p is %d\n", *p);
    printf("The value of i is %p\n", (void *)&i);
}