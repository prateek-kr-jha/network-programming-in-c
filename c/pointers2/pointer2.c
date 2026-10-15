#include <stdio.h>

// if you have pointer to type, adding one to the pointer moves to the next item of that type directly after it in memory
int my_strlen(char*);

int main(void)
{
    int a[] = {11, 22, 33, 44, 55, 999};

    int *p = a;// int *p = &a[0];
    // printf("%d\n", *p);

    printf("%d\n", my_strlen("MY name is khan!!"));

    // while (*p != 999)
    // {
    //     printf("%d\n", *p);
    //     p++;
    // }
    
}

//-> a[b] == *(a + b)
// int fun_name(char *s) is same as int fun_name(char s[])
// void pointer -> means we don't exactly know the type of the thing

int my_strlen(char *s)
{
    char *p = s;

    while(*p != '\0') {
        p++;
    }

    return p - s;
}

// int main(void)
// {
//     int a[] = {11, 22, 33, 44, 55};

//     int *p = a;

//     for(int i = 0; i < 5; i++){
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", p[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *(a + i));
//     }
//     printf("\n");
//     for(int i =0; i < 5; i++) {
//         printf("%d ", *(p + 1));
//     }
//     printf("\n");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", *(p++));
//     }

//     printf("\n");
// }