/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-04 10:29:25
 *
 * With filename: c01_s05_e00_line_counting.c
 */

#include <stdio.h>

int main()
{
	int c, lt = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			lt++;
	}

	printf("Newline Total: %d\n", lt);

	return 0;
}
