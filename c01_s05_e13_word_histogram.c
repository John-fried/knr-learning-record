/**
 *
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-13 | Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 *      Created Date: 2026-01-05 20:42:34
 *
 * With filename: c01_s05_e13_word_histogram.c
 */

#define IN 1
#define OUT 0
#define MAX_LENGTH 10

#include <stdio.h>

int main()
{
	int c, i, j, length;
	int wl[MAX_LENGTH + 1]; /* index 11 is null terminator */
	int state = OUT;

	length = 0;

	/* avoid null */
	for (i = 0; i < MAX_LENGTH; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (length > 0) {
				++wl[length];
				length = 0;
			}
		}
		else if (state == OUT)
			state = IN;

		if (state == IN) {
			++length;
		}
	}

	for (i = 1; i <= MAX_LENGTH; ++i) {
		j = 1;
		printf("%d - %d: ", i, wl[i]);

		while (j <= wl[i]) {
			printf("#");
			++j;
		}

		putchar('\n');
	}

	return 0;
}
