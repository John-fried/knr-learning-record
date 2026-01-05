/**
 * K&R The C Programming Language.
 * Example of implementation in
 *
 *      Chapter: 01
 *      Exercises: 01-8 | Write a program to count blanks, tabs, and newlines
 *      Created Date: 2026-01-04 15:24:48
 *
 * With filename: c01_s05_e8_blanks_tab_newline.c
 */

#include <stdio.h>

int main()
{
	int c, blanks, tabs, newline;
	int total_blanks, total_tabs, total_newline;

	blanks = tabs = newline = 0;
	total_blanks = total_tabs = total_newline = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
				blanks++;
				total_blanks++;
				break;
			case '\t':
				tabs++;
				total_tabs++;
				break;
			case '\n':
				newline++;
				total_newline++;
				break;
		}

		/* Skip if not terminated by newline */
		if (newline == 0)
			continue;

		printf("b: %d t: %d n: %d\n", blanks, tabs, newline);
		blanks = tabs = newline = 0;
	}

	printf("%3s %3s %3s\n", "BLANKS", "TABS", "NEWLINE");
	printf("%3d %3d %3d\n", total_blanks, total_tabs, total_newline);

	return 0;
}
