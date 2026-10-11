#include <stdio.h>

void times2(int*, int);
void times3(int*, int);
void times4(int*, int);
void printArray(int*, int);

int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};

    printArray(x, 5);
    times2(x, 5);
    printArray(x, 5);
    times3(x, 5);
    printArray(x, 5);
    times4(x, 5);
    printArray(x, 5);
}

void times2(int *a, int len)
{
    for(int i = 0; i < len; i++) {
        a[i] = a[i] * 2;
    }
}

void times3(int *a, int len)
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

void printArray(int *a, int len)
{
    for(int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}