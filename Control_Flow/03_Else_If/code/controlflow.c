#include <stdio.h>

#define MAX 1000

int binarysearch(int x, int v[], int n);

void main()
{
	int c, i, j, k;
	int bank[MAX];
	for (i = 0; i < MAX; ++i) {
		bank[i] = i;
	}
	printf("Enter a number -> ");
	scanf("%d", &k);
	j = binarysearch(k, bank, MAX);
	printf("num -> %d\n", j);
}

int binarysearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = high - 1;
		} else if (x > v[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}
