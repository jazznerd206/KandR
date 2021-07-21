#include <stdio.h>
#define EOL '\n'

main()
{
	long nc;
	int c;
	nc = 0;

	while ((c = getchar()) != EOF)
	{
		printf("%c\n", c);
		++nc;
		if (c == EOL)
            		/* Print number of input characters (not including return character) */
            		printf("%1ld\n", nc);
	}
}
