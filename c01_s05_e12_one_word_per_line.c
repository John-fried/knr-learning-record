/**
 *
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-12 | Write a program that prints its input one word per line
 *      Created Date: 2026-01-04 22:54:33
 *
 * With filename: c01_s05_e12_one_word_per_line.c
 */

#define IN 1
#define OUT 0

#include <stdio.h>

int main()
{
	int c, lastc, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			if (lastc != c)
				printf("\n");
		} else {
			state = IN;
			putchar(c);
		}

		lastc = c;
	}

	return 0;
}
