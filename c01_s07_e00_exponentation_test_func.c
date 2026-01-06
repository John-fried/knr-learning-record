/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-06 15:31:51
 *
 * With filename: c01_s07_e00_exponentation_test_func.c
 */

#include <stdio.h>

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 0; i < n; ++i)
		p = p * base;

	return p;
}

int main()
{
	for (int i = 0; i < 10; ++i) {
		printf("\n%2d.  (2^%d) (-3^%d)\n", i, i, i);
		printf("  %5d %5d\n", power(2, i), power(-3, i));
	}

	return 0;
}
