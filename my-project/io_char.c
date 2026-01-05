/**
 * program yang memberi tahu 
 * setiap data pada buffer input
 */

#define IN 1
#define OUT 0

#include <stdio.h>

int main()
{
	int c, i;
	int ndigit[10];
	int state = OUT;
	double nwhite, nother, nword;
	double nascii = 0;

	nwhite = nother = nword = 0;

	/* avoid null */
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			++nwhite;
		} else {
			if (state == OUT) {
				state = IN;
				++nword;
			}

			++nother;
			nascii += (double) c;
		}
	}

	printf("digits: ");
	for (i = 0; i < 10; ++i)
		printf(" %2d ", ndigit[i]);
	
	printf("\nwhitespace: %.0f\n", nwhite);
	printf("word: %.0f\n", nword);
	printf("chars: %.0f\n", nother);
	printf("ascii total: %.0f\n", nascii);

	return 0;
}
