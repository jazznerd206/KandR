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
		printf("%-25s%-25s \n", "Fahr", "Celsius"); 
		printf("%-253.0d%-256.1d \n", fahr, celsius);
		fahr = fahr + step;
	}
}
