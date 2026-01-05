/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-10 | Write a program to copy its input to output. replacing each tab \t, backspace \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguoslus way.
 *      Created Date: 2026-01-04 18:11:57
 *
 * With filename: c01_s05_e10_visible_tab_and_backslash.c
 */

#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case '\t':
				printf("%s", "\\t");
				break;
			case '\b':
				printf("%s", "\\b");
				break;
			case '\\':
				printf("%s", "\\\\");
				break;
			default:
				putchar(c);
				break;
		}
	}

	return 0;
}
