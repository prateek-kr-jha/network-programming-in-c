#include <stdio.h>
#include <string.h>
// void* -> pointer to any type(typeless pointer)
// void *memcpy(void *s1, void *s2, size_t n);
/**
 * you can't do pointer arithmetic on void*
 * you cant' dereference void*
 * can't use arrow operator on void*
 * can't use array notation on void*
 */
int main(void)
{
    char s[] = "Goats!";
    char t[100];
    printf("%zu\n", strlen(s));
    memcpy(t, s, strlen(s) + 1);

    printf("%s\n", t); // goats

    char a = 'X';

    void *p = &a;
    char *q = p;

    // printf("%c\n", *p);
    printf("%c\n", *q);
}

// int main(void)
// {
//     int a[] = {11, 22, 33};
//     int b[3];

//     memcpy(b, a, 3 * sizeof(int));

//     printf("%d\n", b[1]);
// }

void *my_memcpy(void *dest, void *src, int byte_count)
{
    char *s = src, *d = dest;

    while(byte_count--)
    {
        *d++ = *s++;
    }

    return dest;
}