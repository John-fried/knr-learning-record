/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-6 | Verify that the expression getchar() != EOF is 0 or 1
 *      Created Date: 2026-01-04 06:06:05
 *
 * With filename: c01_s05_e6_file_copying.c
 */

#include <stdio.h>

int main()
{
	int c;
	c = (getchar() != EOF);

	printf("Eof? %s\n", c ? "No" : "Yes");

	return 0;
}
