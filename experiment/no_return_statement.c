#include <stdio.h>

int dos = 13;

int norestat(int r)
{
	dos = r;
}

int main()
{
	norestat(30);
	printf(" %d \n", dos);
}
