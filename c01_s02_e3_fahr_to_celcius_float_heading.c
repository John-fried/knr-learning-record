/**
 * Version 3 of fahrenheit to celcius conversion program
 * New: Prints heading
 * Task: exercises 1-3
 */
#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300; /* Nilai tertinggi */
	step = 20; /* Nilai kenaikan */
	fahr = lower;

	/* Prints heading */
	printf("%3s %6s\n", "FAHR", "CELCIUS");

	while (fahr <= upper) {
		celcius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr += step;
	}

	return 0;
}
