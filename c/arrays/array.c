#include <stdio.h>

int main(void)
{
    int i;
    float f[8];

    f[0] = 3.141;
    f[1] = 1.414;
    f[2] = 1.61803;
    f[3] = 2.7182;

    for(i = 0; i < 4; i++) {
        printf("%f\n", f[i]);
    }

    printf("%zu\n", sizeof f);
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(f) / sizeof(float));
    printf("%zu\n", sizeof(f) / sizeof(f[0]));// these methods of finding length of the array doesn't work when you pass array to a function
}