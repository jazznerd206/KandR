/*

reproduce this for loop ->

for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
	s[i] = c;
}

without using && and ||

*/

#include <stdio.h>

void main()
{
	int i;

	for (i = 0; i < lim - 1; ++i) {
		while ((c = getchar()) != EOF) {
			while (c != EOF) {
				s[i] = c;
			}
		}
	}
}
