/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-14 | write a program that prints a horizontal histogram of the frequencies of different characters in its input.
 *      Created Date: 2026-01-05 21:48:19
 *
 * With filename: c01_s05_e14_char_histogram.c
 */

#define TOTAL_CHARS 130
#include <stdio.h>

int main()
{
	int c, i, j;
	int character[TOTAL_CHARS + 1];

	for (i = 0; i <= TOTAL_CHARS; ++i)
		character[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t')
			continue;

		++character[c];
	}

	for (i = 0; i <= TOTAL_CHARS; ++i) {
		if (!character[i])
			continue;

		j = 1;
		printf("'%c' | ", i);

		while (j <= character[i]) {
			printf("#");
			++j;
		}

		putchar('\n');
	}

	return 0;
}
