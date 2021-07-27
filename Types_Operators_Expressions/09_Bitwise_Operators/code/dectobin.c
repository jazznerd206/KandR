// function to convert decimal to binary

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 32
#define BIN_LEN 8

void tobinary(int b[], int n);

void main()
{
	int n, i;
	int binary[BIN_LEN];
	for (i = 0; i < BIN_LEN; ++i) {
		binary[i] = 0;
	}
	printf("Enter the number to convert: ");
	scanf("%d",&n);
	tobinary(binary, n);
}

void tobinary(int binary[], int n)
{
	int i, j;
	i = 2;

	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		++i;
	}
	for (j = BIN_LEN - 1; j >= 0; --j) {
		printf("%d", binary[j]);
	}
	printf("\n");
}
