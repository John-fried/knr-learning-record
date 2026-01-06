/**
 * Chapter 1, section 3
 * Exercises: 1-3 (Modify the temperature conversion
 *      program to print the table in reverse order)
 *
 *  Also: using for loop
 *  Also: using for symbolic constant
 */

#define LOWER 0     /* The Lower value */
#define UPPER 300   /* The Upper Value */
#define STEP 20     /* The Step increment */

#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
