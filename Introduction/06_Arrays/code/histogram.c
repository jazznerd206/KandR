
#include <stdio.h>

// print a histogram of word lengths

#define IN 0
#define OUT 1
#define MAX_LEN 10

void main()
{
	int lengths[MAX_LEN + 1];
	int c, i, j, x, wc, charCount, state, maxVal, index;
	for (i = 0; i < MAX_LEN + 1; ++i)
	{
		lengths[i] = 0;
	}
	index = wc = charCount = maxVal = 0;
	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (isalpha(c) != 0 || isdigit(c) != 0)
		{
			++charCount;
		}
		if (c == ' ' || c == '\n' || c == '\t' || c == EOF)
		{
			state = OUT;
			if (charCount > maxVal)
			{
				maxVal = charCount;
			}
			if (charCount <= MAX_LEN && charCount != 0)
			{
				lengths[charCount - 1] = ++lengths[charCount - 1];

			}
			else
			{
				lengths[MAX_LEN] = ++lengths[MAX_LEN];
			}
			charCount = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
	}
	printf("\n");
	printf("lengths =");
	for (j = 0; j < MAX_LEN + 1; ++j)
	{
		printf(" %d", lengths[j]);
	}
	printf("\n");
	printf("word count: %d\n", wc);
	int h, n, t;
	for (h = MAX_LEN; h >= 0; --h)
	{
		for (n = 0; n < MAX_LEN; ++n)
		{
			// printf("%d %d\n", h, lengths[n]);
			if (lengths[n] >= h)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for (t = 0; t < MAX_LEN; ++t)
	{
		printf("%d ", t);
	}
	printf("\n");
}
