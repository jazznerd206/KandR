#include <stdio.h>

// this function returns a number raised to a power

int convertF (int m);
int convertC (int n);

void main()
{
	int i, j;

	for (i = 0; i <= 300; i = i + 20)
	{
		printf("celsius to fahrenheit: %d -> %6.1d\n", i, convertF(i));
	}
	for (j = 300; j >= 0; j = j - 20)
	{
		printf("fahrenheiht to celsius: %d -> %6.1d\n", j, convertC(j));
	}
}
/*
convert TO celsius
*/
int convertC (int f)
{
	return (5.0/9.0) * (f - 32.0);
}
/*
convert TO fahrenheit
*/
int convertF (int c)
{
	return (c + 32.0) * (9.0 / 5.0);
}
