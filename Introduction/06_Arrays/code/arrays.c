#include <stdio.h>

// count digits, white space and others

void main()
{
	int c, i, white, other;
	int digits[10];

	white = other = 0;

	for (i = 0; i < 10; ++i)
	{
		digits[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++digits[c-'0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			++white;
		}
		else
		{
			++other;
		}
	}
	printf("\n");
	printf("digits =");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d", digits[i]);
	}
	printf("\n");
	printf(", white space = %d, other = %d\n", white, other);
}
