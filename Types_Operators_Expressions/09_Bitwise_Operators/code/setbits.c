// function to convert decimal to binary

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 32
#define BIN_LEN 8

void tobinary(int b[], int n);
void setbits( int a[],int b[], int c, int d);

void main()
{
	int m, n, i;
	int binone[BIN_LEN];
	int bintwo[BIN_LEN];
	for (i = 0; i < BIN_LEN; ++i) {
		binone[i] = bintwo[i] = 0;
	}
	printf("Enter number one -> ");
	scanf("%d",&m);
	printf("Enter number two -> ");
	scanf("%d",&n);
	tobinary(binone, m);
	tobinary(bintwo, n);
	setbits(binone, bintwo, 1,  2);
}

void tobinary(int binary[], int n)
{
	int i, j;
	i = 0;

	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		++i;
	}
//	printf("to binary ->");
//	for (j = BIN_LEN - 1; j >= 0; --j) {
//		printf("%d", binary[j]);
//	}
//	printf("\n");
}

void setbits(int a[], int b[], int c, int d)
{
	int m, n;

	printf("binone -> ");
	for (n = BIN_LEN - 1; n >= 0; --n) {
		printf("%d", a[n]);
	}
	printf("\nbintwo -> ");
	for (m = BIN_LEN - 1; m >= 0; --m) {
		printf("%d", b[m]);
	}
	printf("\n");
}
