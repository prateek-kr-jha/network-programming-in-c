#include <stdio.h>

void times2(int*, int);
void times3(int[], int);
void times4(int*, int);
void printArray(int[5], int);
void print2DArray(int[][5], int, int);

int main(void)
{
    int x[][5] = {
        {1, 2, 3, 4, 5},
        {6, 27, 37, 47, 57}
    };
    print2DArray(x, 2, 5);
    // printArray(x, 5);
    // times2(x, 5);
    // printArray(x, 5);
    // times3(x, 5);
    // printArray(x, 5);
    // times4(x, 5);
    // printArray(x, 5);
}

void times2(int *a, int len)
{
    for(int i = 0; i < len; i++) {
        a[i] = a[i] * 2;
    }
}

void times3(int a[], int len)
{
    for(int i = 0; i < len; i++) {
        a[i] = a[i] * 3;
    }
}

void times4(int *a, int len)
{
    for(int i = 0; i < len; i++) {
        a[i] = a[i] * 4;
    }
}

void printArray(int a[5], int len)
{
    for(int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void print2DArray(int a[][5], int len1, int len2)
{
    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}