#include <stdio.h>
#include <ctype.h>

void main()
{
	int c;

	while ((c = getchar()) != EOF) {
		switch(c) {
			case isalpha(c) != 0:
				putchar(c);
			case isdigit(c) != 0:
				putchar(c);
			case isspace(c):
				putchar('_');
			default:
				putchar('N');
		}
	}
}
