#include <stdio.h>

void say(text)
char *text;
{
	printf("%s\n", text);
}

int main()
{
	say("hello, world");
}
