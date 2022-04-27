<<<<<<< HEAD
,
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number and state whethe positive or negative
 *
 * Return : 0 Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        /* Last digit codes starts from here */
	if (n % 10 > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}

<<<<<<< HEAD
>>>>>>> 4325fbfffbd4095fe365b6efda1d26c83dc2ea7c
=======
>>>>>>> 9bbfbaccf6889ac4a617c800809a9c624a40a042
