#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000

int get(char line[], int maxline);
void expand (char s1[], char s2[]);

void main()
{
	int len;
	char s1[MAX], s2[MAX];

	get(s1, MAX);
	expand(s1, s2);
	printf("%s\n", s2);
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

void expand(char s1[], char s2[])
{
	int i, j, c, post;
	i = j = 0;
	while((c = s1[++i]) != '\0') {
        	if(s1[i] == '-' && s1[i + 1] >= c) {
			post = s1[i + 1];
			if (post > c) {
				while (c < post) {
					s2[j++] = c++;
				}
			}
        	} else {
			s2[j] = c;
			++j;
		}
	}
	s2[j]='\0';
}
