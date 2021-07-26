#include <stdio.h>
#include <ctype.h>

#define MAX 100

int get(char s[], int l);
int htoi(char s[]);

void main()
{
	char buffer[MAX];
	int v;

	get(buffer, MAX);
	v = htoi(buffer);

	printf("The value of hex %s is integer %d\n", buffer, v);
}

int get(char s[],int lim)
{
    	int c, i;

    	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        	s[i] = c;
	}
   	if(c=='\n') {
       		s[i] = c;
       		++i;
   	}
    	s[i] = '\0';

    	return i;
}

int htoi(char s[])
{
	int digit, i, n, flag;

	i = n = flag = 0;

	if (s[i] == '0') {
		if (s[i + 1] == 'x' || s[i + 1] == 'X') {
			i = i + 2;;
		}
	}
	while (i != 0 && flag == 0) {
		if (s[i] >='0' && s[i] <='9')
			digit = s[i] - '0';
		else if (s[i] >='a' && s[i] <='f')
			digit = s[i] - 'a' + 10;
		else if (s[i] >='A' && s[i] <='F')
			digit = s[i] - 'A' + 10;
		else flag = 1;
		++i;
		n = 16 * n + digit;
	}
	return n;
}
