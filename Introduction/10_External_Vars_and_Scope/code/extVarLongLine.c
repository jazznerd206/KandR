// print longest line, special version using globally scoped variables

#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int nextline(void);
void copy(void);

void main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;

	while ((len = nextline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0) {
		printf("%s\n", longest);
	}

}

// next line, specialized version
int nextline(void)
{
	int i, c;
	extern char line[];

	for (i = 0; i < MAXLINE && ((c = getchar()) != EOF && c != '\n'); ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;

	while ((longest[i] = line[i]) != 0) {
		++i;
	}

}
