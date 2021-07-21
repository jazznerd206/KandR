#include <stdio.h>

/*
counts lines, words and characers
 -> operates on the loose assumption that any string of characters not separated by a space is a word
*/

#define IN 1 // inside a word
#define OUT 2 //outside a word

void main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("\n");
	printf("new lines: %d, words: %d, characters: %d\n", nl, nw, nc);
}
