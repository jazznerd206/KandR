#include <stdio.h>
#include <ctype.h>

#define MAX 100
#define MAXLINES 2

int get(char s[], int l);
void squeeze(char s[], char t[], int i, int j);
void copy(char to[], char from[]);


void main()
{
	int len, c, i, j, lines;
	lines = i = j = c = 0;
	char buffer[MAX];
	char s1[MAX];
	char s2[MAX];

	while ((len = get(buffer, MAX)) > 0) {
		if (lines == 0) {
			i = len;
			copy(s1, buffer);
			++lines;
		}
		else if (lines == 1) {
			j = len;
			copy(s2, buffer);
			++lines;
		}
		if (lines == 2) {
			printf("s1 pre-squeeze -> %s <||\n", s1);
			squeeze(s1, s2, i, j);
			lines = 0;
		}
	}
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


void squeeze(char s[], char t[], int slen, int tlen)
{
	int i, j, c, n, flag;
	char temp[slen];
	flag = c = 0;
	for (i = 0; i < slen; ++i) {
		for (j = 0; j < tlen; ++j) {
			if (s[i] == t[j]) {
				flag = 1;
			}
		}
		if (flag == 0) {
			temp[c] = s[i];
			++c;
		} else {
			flag = 0;
		}
	}
	printf("s1 post-squeeze -> ");
	for (n = 0; n < c; ++n) {
		printf("%c", temp[n]);
	}
	printf(" <|| \n");
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
