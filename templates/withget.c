#include <stdio.h>
#define MAX 1000

int get(char line[], int maxline);

void main()
{
	int len;
	char buffer[MAX];

	while ((len = get(buffer, MAX)) > 0) {
		printf("buffer -> %s\n", buffer);
	}
}

int get(char s[], int lim)
{
	int c, i;
	// set buffer to character
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	// add new line
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	// add null terminator 
	s[i] = '\0';
	// return pointer
	return i;
}
