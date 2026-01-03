/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: No exercises
 *      Created Date: 2026-01-03 23:52:56
 *
 * With filename: c01_s05_e00_file_copying.c
 */

#include <stdio.h>

/* copy input to output 1st vers */
int main() {
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
