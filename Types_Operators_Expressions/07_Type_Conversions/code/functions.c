#include <stdio.h>

#define LOOP 10

int atoi(char s[]);
int lower(int c);

void main()
{
	int c, i;

	while ((c = getchar()) != EOF) {
		for (i = 0; i < LOOP; ++i) {
			printf("%d\n", lower(c));
		}
	}
}

int atoi(char s[])
{
	int i, n;

	n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}

	return n;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	}
	else return c;
}
