/*
Fold lines into two or more shorter lines after the last non blank character before the nth column
line length = 15
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_IN 1000
#define MAX_LINE 15

int get(char s[], int l);
void parse(char s[], int e);

void main()
{
	int len, i, j, chars;
	char curr[MAX_IN];
	char p[MAX_LINE];

	while ((len = get(curr, MAX_IN)) > 0) {
		if (len > MAX_LINE) {
			printf("Big ass line\n");
			parse(curr, len);
		}
		else {
			printf("%s\n", curr);
		}
	}
}

int get(char s[], int lim)
{
        int c, i;

        for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
                s[i] = c;
        }
        if (c == '\n') {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;
}

void parse(char s[], int endpoint)
{
	int i, j;

	i = j = 0;

	while (i < endpoint) {
		if (j == MAX_LINE) {
			printf("\n");
			j = 0;
		}
		else {
			printf("%c", s[i]);
			++i;
			++j;
		}
	}
}
