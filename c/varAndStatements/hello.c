#include <stdio.h>
#include <stdbool.h>
// %zu is the format specifier for type size_t
int main(void) 
{
    int i = 2;
    float f = 3.14;
    int j;
    char *s = "Hellow, World!";
    bool x = true;
    int z = i > 3 ? 4 : 2*10;

    i = 10;
    j = 5 + ++i;
    if(x) {
        printf("%s i = %d and f = %f and z = %d!\n and x is true\n %s\n", s, i, f, j, x % 2 == 0 ? "even" : "odd");
    }

    for(i =0, j=0; i < 10; i++, j++)
        printf("%d, %d\n", i, j);

    printf("%zu\n",sizeof(true == 12));
    printf("%zu\n",sizeof i);
    printf("%zu\n",sizeof(2 + 7));
    printf("%zu\n",sizeof 3.14 );

}