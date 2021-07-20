#include <stdio.h>

/* print F/C table
	for fahr = 0, 20, ..., 300
*/
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 30;
	step = 1;

	celsius = lower;

	while (celsius <= upper) {
		fahr = (celsius + 32.0) * (9.0/5.0);
		printf("%3.0d %6.1d\n", celsius, fahr);
		celsius = celsius + step;
	}
}
