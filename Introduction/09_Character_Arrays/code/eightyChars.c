#include <stdio.h>
#define MAXLINE 256

void printline(int *p, int len);

// print the longest input line

void main()
{
	int len, max, c; // Current, Max length
	int buffer[MAXLINE];

	c = len = max = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' && len >= 80) {
			printline(buffer, len);
			len = 0;
		} else {
			buffer[len + 1] = c;
			++len;
		}
	}
}

void printline(int chars[], int len)
{
	int i;

	for (i = 0; i < len; ++i) {
		printf("%c", chars[i]);
	}
	printf("\n");
}
