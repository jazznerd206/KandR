#include <stdio.h>

// input to ouput REVISIT

void main()
{
	int c, previous;

	while (c = getchar() != EOF)
	{
		if(c == ' ')
		{
			if (previous != ' ')
        			putchar(c);
    		}
    		else
		{
     			putchar(c);
		}
 		previous = c;
	}
}

