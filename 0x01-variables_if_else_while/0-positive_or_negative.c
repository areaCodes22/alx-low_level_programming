#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Conditions Here */
	if (n == 0)
	{
		printf(" %i is zero\n", n);
	}
	else if (n < 0)
	{
		printf(" %i is negative\n", n);
	}
	else
	{
		printf(" %i is positive\n", n);
	}
	return (0);
}
