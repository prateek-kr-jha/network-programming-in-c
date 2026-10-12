#include <stdio.h>
// files and streams: files are type of stream
// stdin keyboard by default
// stdout keyboard by default
// stderror keyboard by default
// unix specific: ./foo > output.txt 2> errors.txt
// streams -> text and binary
int main(void)
{
    printf("Hello, World - 1\n");
    // =
    fprintf(stdout,"Hello, World - 2\n");
    FILE *fp;

    fp = fopen("bruce.txt", "r");

    // int c;
    // while((c = fgetc(fp)) != EOF)
    //     printf("%c", c);
    char s[1024];
    int linecount = 0;

    while (fgets(s, sizeof s, fp) != NULL)
    {
        printf("%d: %s", ++linecount, s);
    }
    
    printf("\n");
    fclose(fp);
}