// replace all tabs with the corresponding amount of other characters

#include <stdio.h>

int tablength;

void main()
{
	int c, i, j, characters;
	extern int tablength;

	characters = i = 0;
	tablength = 8;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			i = tablength - ((characters - 1) % tablength);
			while (i > 0) {
				putchar('_');
				++characters;
				--i;
			}
		}
		else if (c == '\n') {
			putchar(c);
			characters = 0;
		}
		else { // c is a alphanumeric character or a space not at the end of a line
			putchar(c);
			++characters;
		}
	}
}


