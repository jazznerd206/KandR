#include <stdio.h>
#define MAXLINE 100

int get(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line

void main()
{
	int len, max, c; // Current, Max length, current character
	char line[MAXLINE]; // current line
	char longest[MAXLINE]; // longest line store

	max = 0;

	while ((len = get(line, MAXLINE)) > 0)
	{
 		if (line[len-1] != '\n') {
            		while ((c = getchar()) != EOF && c != '\n')
                		len++;
        	}
        	if (len > max) {
            		max = len;
            		copy(longest, line);
        	}
	}
	if (max > 0) {
		printf("length: %d\n", max);
		printf("string: %s\n", longest);
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

void copy(char to[], char from[])
{
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
