#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000

void itob(char s[], int n, int b);
void reverse(char s[], int len);

void main()
{
	int n;
	char buffer[MAX];
	printf("Number -> ");
	scanf("%d", &n);
	itob(buffer, n, 2);
//	printf("%s\n", buffer);
}

void itob(char s[], int n, int b)
{
	int i,j,sign;

    	if ((sign = n) < 0) {
	        n = -n;
	}
    	i = 0;

    	do {
    		j = n % b;
        	s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;

	} while ((n /= b) > 0);

    	if (sign < 0) {
        	s[i++]='-';
	}
    	s[i]='\0';

    	reverse(s, i);
}


void reverse(char s[], int len)
{
	int i;

	for (i = len; i >= 0; --i) {
		printf("%c", s[i]);
	}

	printf("\n");
}
