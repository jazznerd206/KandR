#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int _getline(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould";

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Wrong number of arguments.");
        return 0;
    } else {
        FILE *fptr;
        char c;
        char line[MAXLINE];
        int i = 0;
        fptr = fopen(argv[1], "r");
        if (fptr == NULL)
        {
            printf("Cannot open file \n");
            return 0;
        }
        c = fgetc(fptr);
        while (c != EOF)
        {
            if (c == '\n') {
                if (strindex(line, pattern) >= 0) {
                    printf("%s\n", line);
                }
                memset(line, 0, i);
                i = 0;
            } else {
                line[i] = c;
                ++i;
            }
            c = fgetc(fptr);
        }
        printf("\n");
        fclose(fptr);
        return 0;
    }
}

int _getline(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
        if (c == '\n')
            s[i++] = c;
            s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}