#include <stdio.h>

int main(void) 
{
    // int i;
    int a[][3] = {
        [0][0] = 1,
        [1][1] = 1,
        [2][2] = 1
    };
    size_t array_length = sizeof(a) / sizeof(a[0]);
    size_t sub_array_length = sizeof(a[0])/ sizeof(a[0][0]);
    printf("%zu and %zu\n",array_length, sub_array_length);
    for (size_t i = 0; i < array_length; i++) {
        for(size_t j =0; j < sub_array_length; j++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}