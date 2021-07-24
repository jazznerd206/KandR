#include <stdio.h>

// reverse input one line at a time

#define MAX 1000

int get(char s[], int lim);

void main()
{
	int c, i, j, len;
	char buffer[MAX];

	while ((len = get(buffer, MAX)) > 0) {
		for (j = 0; j < len; ++j) {
			if (buffer[j] == '\n') break;
		}
		for (i = j; i >= 0; --i) {
			printf("%c", buffer[i]);
		}
		printf("\n");
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
