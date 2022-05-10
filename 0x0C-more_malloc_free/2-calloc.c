#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Size of array.
 * @size: Size.
 * Return: P.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;

	i = 0;
        while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", nmemb[i]);
		i++;
	}
}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, "School! :)\n");
	a[97] = '!';
	_calloc(a, 98);
	free(a);
	return (0);
}
