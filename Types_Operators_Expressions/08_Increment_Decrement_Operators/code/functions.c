#include <stdio.h>
#include <ctype.h>

#define MAX 100

int get(char s[], int l);
void squeeze(char s[], int c);


void main()
{
	int len, c, i;
	c = 'A';
	char buffer[MAX];
	len = get(buffer, MAX);
	printf("pre-squeeze -> %s\n", buffer);
	squeeze(buffer, c);
	printf("post-squeeze -> %s\n", buffer);
}


int get(char s[],int lim)
{
    int c,i;

    for(i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] =c;

    if(c=='\n')
    {
        s[i] =c;
        ++i;
    }
    s[i] = '\0';

    return i;
}


void squeeze(char s[], int c)
{
	int i, j;
	j = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}
