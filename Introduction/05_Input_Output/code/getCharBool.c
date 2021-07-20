#include <stdio.h>

// verify the value of EOF equals 0 or 1

main()
{
	int c;
	while ( c = getchar() != EOF ) {
        printf("%d\n", c);
	}
}
