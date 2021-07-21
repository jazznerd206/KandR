#include <stdio.h>

/*
Write a program that prints out one word per line.
*/

#define INSPACE 0
#define OUTSPACE 1
void main()
{
	int c, state;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == '\t' || c == ' ')
		{
			if (state == 1)
      			{
       				 state = INSPACE;
			       	 putchar('\n');
			}
		}
		else
		{
			state = OUTSPACE;
			putchar(c);
		}
	}
	printf("\n");
}
