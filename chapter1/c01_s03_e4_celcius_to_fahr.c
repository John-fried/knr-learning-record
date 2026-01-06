/**
 * Exercises: 1-4
 * Write a program to print the coressponding Celcius
 * To Fahrenheit table.
 *
 * Formula: F = (C * 9/5) + 32
 */

#include <stdio.h>

int main()
{
	float celcius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	celcius = lower;

	printf("%6s %3s\n", "CELCIUS", "FAHR");

	while (celcius <= upper) {
		fahr = (celcius * 9.0 / 5.0) + 32;
		printf("%6.1f %3.0f\n", celcius, fahr);
		celcius += step;
	}

	return 0;
}
