#include <stdio.h>

int main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower = 0; /* Nilai terkecil */
	upper = 300; /* Nilai tertinggi */
	step = 20; /* Kenaikan nilai */

	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr += step;
	}

	return 0;
}
