#include <stdio.h>
#include <ctype.h>
#define MAX 1000

int get(char l[], int maxline);
void escape(char l[], int len);

void main()
{
	int len;
	char buffer[MAX];

	while ((len = get(buffer, MAX)) > 0) {
		escape(buffer, len);
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

void escape(char buffer[], int len)
{
	int i, temp;

	for (i = 0; i < len; ++i) {
		if (buffer[i] == '\n')
			printf(" <- /newline/ -> ");
		else if (buffer[i] == '\t')
			printf(" <- /tab/ -> ");
		else printf("%c", buffer[i]);

	}
	printf("\n");
}
