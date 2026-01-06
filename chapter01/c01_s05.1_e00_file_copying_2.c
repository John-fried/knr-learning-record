/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-03 23:52:56
 *
 * With filename: c01_s05_e00_file_copying_2.c
 */

#include <stdio.h>

/* copy input to output 2st vers */
int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}
