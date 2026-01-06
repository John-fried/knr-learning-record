/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-04 10:11:13
 *
 * With filename: c01_s05_e00_character_counting_2.c
 */

#include <stdio.h>

int main()
{
	double nc;

	for (nc = 0; getchar() != EOF; nc++)
		; /* Nothing */

	printf("%.0f\n", nc);

	return 0;
}
