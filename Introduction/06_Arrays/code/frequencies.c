#include <stdio.h>

/* count the frequencies of characters in a string
assumptions:
all alpha/digits are counted
any special character is type other
any white space is type white space
*/

#define IN 0
#define OUT 1
#define MAX_LEN 28

void main()

{
	int c, i, j, n, charCount, white, other, state;
	int vals[MAX_LEN];
	i = j = charCount = white = other = 0;
	// set initial value array to zero
	for (i = 0; i < MAX_LEN; ++i)
	{
		vals[i] = 0;
	}
	// run loop
	while ((c = getchar()) != EOF)

	}

}
