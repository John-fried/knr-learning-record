/**
 * 1.3 The For Statement
 *
 * Different variation of fahr -> celcius
 * Using the for statement
 */

#include <stdio.h>
#include <stdlib.h>

/* You Can use ./programs <MAX_UPPER_LIMIT>
 * Example: ./for-statement-fahr-celcius.c 400
 */
int main(int argc, char *argv[])
{
	int fahr;
	int upper = (argc > 1) ? atoi(argv[1]) : 300;

	printf("%3s %6s\n", "FAHR", "CELCIUS");
	for (fahr = 0; fahr <= upper; fahr += 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}
