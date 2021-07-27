// function to convert decimal to binary

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 32

void tobinary(int b[], int n);

void main()
{
	int n;
	int binary[10];
	printf("Enter the number to convert: ");
	scanf("%d",&n);
	tobinary(binary, n);
}

void tobinary(int binary[], int n)
{
	int i;
	i = 0;

	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		++i;
	}
	for (i = i - 1; i >= 0; --i) {
		printf("%d", binary[i]);
	}
	printf("\n");
}
