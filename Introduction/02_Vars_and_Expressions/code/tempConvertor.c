#include <stdio.h>

/* print F/C table
	for fahr = 0, 20, ..., 300
*/
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0d %6.1d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
