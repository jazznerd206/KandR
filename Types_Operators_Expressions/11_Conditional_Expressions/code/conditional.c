// use a conditional statement to convert upper case letters to lower case

#include <stdio.h>


int lower(int l);

void main()
{
	int c, temp;

	while ((c = getchar()) != EOF) {
		temp = lower(c);
		printf("%c", temp);
	}
	printf("\n");
}

int lower(int l)
{
	l = l >= 65 && l <= 91 ? l + 32 : l;
	return l; 
}
