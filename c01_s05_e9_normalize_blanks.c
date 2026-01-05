/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-9 | Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
 *      Created Date: 2026-01-04 15:52:27
 *
 * With filename: c01_s05_e9_normalize_blanks.c
 */

#include <stdio.h>

int main()
{
	int c, lastc;

	while ((c = getchar()) != EOF) {
		if (lastc && lastc == ' ' && c == ' ')
			continue;

		lastc = c;
		putchar(c);
	}

	return 0;
}
