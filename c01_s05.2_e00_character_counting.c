/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-04 09:40:00
 *
 * With filename: c01_s05_e00_character_counting.c
 */

#include <stdio.h>

int main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		nc++;

	printf("%ld\n", nc);

	return 0;
}
