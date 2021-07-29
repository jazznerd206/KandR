#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000

void itoa(int n, char s[], int minlen);
void reverse(char s[], int len);
int get(char line[], int maxline);

void main()
{
	int c;
	char buffer[MAX];
	printf("Number -> " );
	scanf("%d", &c);
	itoa(c, buffer, 10);
}

void itoa(int n, char s[], int minlen)
{
       	int i, sign;

       	if ((sign = n) < 0) {
        	n = -n;
       	}
       	i = 0;
       	do {
        	s[i++] = n % 10 + '0';
       	} while ((n /= 10) > 0);
       	if (sign < 0) {
        	s[i++] = '-';
       }
	while (i < minlen) {
                s[i] = ' ';
		i++;
        }
       	s[i] = '\0';
       	reverse(s, i);
}

void reverse(char s[], int len)
{
	while (len >= 0) {
		printf("%c", s[len]);
		--len;
	}
	printf("\n");
}

int get(char s[], int lim)
{
	int c, i;
	// set buffer to character
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	// add new line
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	// add null terminator
	s[i] = '\0';
	// return pointer
	return i;
}
