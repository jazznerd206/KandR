#include <stdio.h>

// this function returns a number raised to a power

int power (int m, int t);

void main()
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	}
}
/*
power: raise base o n-th power; n >= 0
*/
int power (int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
	{
		p = p * base;
	}
	return p;
}
