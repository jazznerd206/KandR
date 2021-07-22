#include <stdio.h>

// using call by value to rewrite the power function
int power (int n, int t);

void main()
{
	printf("3^3: %d\n", power(3,3));
}

int power (int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
	{
		p = p * base;
	}
	return p;
}
