/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-15 | Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
 *      Created Date: 2026-01-06 19:01:29
 *
 * With filename: chapter01/c01_s07_e15_fahr-celcius-func.c
 */

#define LOWER 0
#define UPPER 300
#define STEPSIZE 20

#include <stdio.h>

float fahr_to_celcius(int fahr)
{
	return (5.0/9.0) * (fahr - 32);
}

int main()
{
	int fahr;
	float celcius;

	fahr = LOWER;
	printf("%5s %5s\n", "FAHR", "CELCIUS");

	while (fahr <= UPPER) {
		celcius = fahr_to_celcius(fahr);
		printf("%3d %6.1f°\n", fahr, celcius);
		fahr += STEPSIZE;
	}

	return 0;
}
