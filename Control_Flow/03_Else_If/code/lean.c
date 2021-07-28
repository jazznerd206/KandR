#include <stdio.h>

#define MAX 1000

int binarysearch(int x, int v[], int n);
int lean(int x, int a[], int n);

void main()
{
	int c, i, j, k;
	int bank[MAX];
	for (i = 0; i < MAX; ++i) {
		bank[i] = i;
	}
	printf("Enter a number -> ");
	scanf("%d", &k);
//	j = binarysearch(k, bank, MAX);
	printf("num -> %d\n", lean(k, bank, MAX));
}

int lean(int target, int a[], int max)
{
	int low, high, mid;

	low = 0;
    	high = max - 1;

    	mid = (low + high ) / 2;

    	while (low < high && target != a[mid]) {
        	if (target > a[mid])
            		low = mid + 1;
        	else
            		high = mid - 1;
        	mid = (low + high) / 2;
    	}

    	if (target == a[mid])
        	return mid;
    	else
       		return -1;
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
