// replace all tabs with the corresponding amount of other characters

#include <stdio.h>
#include <ctype.h>

#define TAB 8

void main()
{
	int c, i, j, blank, tab;

	blank = tab = i = 0;

	while ((c = getchar()) != EOF) {
		if (isalpha(c) != 0 || isdigit(c) != 0) {
			printf("This function only accepts blank spaces.");
		}
		if (c == ' ') {
			++blank;
			if (blank == 7) {
				++tab;
				blank = 0;
			}
		}
		else if (c == '\n') {
			while (tab > 0) {
				putchar('\t');
				--tab;
			}
			while (blank > 0) {
				putchar(' ');
				--blank;
			}
			printf("|<- EOF\n");
		}
	}
}


