/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-11 | How would you test this word counter program? What input is most likely to uncover bugs (if any)?
 *      Created Date: 2026-01-05 16:18:45
 *
 * With filename: c01_s05_e11_word_counting.c
 */

#define IN 1	/* Inside a word */
#define OUT 0	/* Outside a word */

#include <stdio.h>

int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;

	printf("INFO: Write your text buffer, CTRL+D if done:\n\n");

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;

		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		},
	}

	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}
