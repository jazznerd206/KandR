#include <stdio.h>

// counts new lines, tabs and blank spaces using the escape sequences for the corresponding characters

main()
{
	int c, nl, blank, tab;
	nl = 0;
	blank = 0;
	tab = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		} else if (c == '\t')
		{
			++tab;
		} else if (c == ' ')
		{
			++blank;
		}
	}
	printf("\n");
	printf("new lines: %d, blanks: %d, tabs: %d", nl, blank, tab);
	printf("\n");
}

