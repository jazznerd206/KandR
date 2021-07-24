#include <stdio.h>
#include <ctype.h>
// this program will extract all trailing blank space at the end of lines as well as remove blank lines entireley

#define MAXLEN 256

void printline(char chars[], int n);
int extract(char c[]);
int get(char s[],int lim);

void main() 
{
	int len, i, temp;
	char buffer[MAXLEN];

	while ((len = get(buffer, MAXLEN)) > 0) {
		if (extract(buffer) > 0) {
			printf("length: %d\n", len);
			printline(buffer, len);
		}
	}
}

int get(char s[], int lim)
{
 	int i, c;

  	for(i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    		s[i] = c;
	}
  	if (c == '\n')
  	{
    		s[i]=c;
    		++i;
  	}
  	s[i]='\0';
  	return i;
}


void printline(char chars[], int len)
{
	int i;

	for (i = 0; i < len; ++i) {
		printf("%c", chars[i]);
	}
	printf("\n");
}

int extract(char vals[])
{
	int j;
	for (j = 0; vals[j] != '\n'; ++j) {};
	--j;
	while (isspace(vals[j])) {
		--j;
	}
	return j;
}
