#include <stdio.h>
#include <string.h>
// strings are char*
// inf defined as pointer don't try to change it, defined as array, then it's not a string literal
// yo can't get string length

int my_strlen(char*);
int main(void)
{
    char *s = "Hello, world!";
    // s[0] = 1; -> undefined behaviour
    printf("%s\n", s);
    char x[] = "Hello there!";
    x[6] = 'w';
    printf("%s\n",x);
    printf("%zu and %zu \n", strlen(s), strlen(x));
    int a = my_strlen(s);
    printf("%d\n",a);

    char t[strlen(s)]; 
    strcpy(t,s);
    t[0] = 'm';
    printf("%s\n", t);

}

int my_strlen(char *s)
{
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }

    return i;
}
