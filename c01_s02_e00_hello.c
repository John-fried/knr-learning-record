#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300; /* Nilai tertinggi */
	step = 20; /* Nilai kenaikan */

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr += step;
	}

	return 0;
}
