#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *reverse_array - Print array in reverse
 *@a: pointer to array of integers
 *@n: number of elements in an array
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, q, rem;

	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] <= 9)
		{
			putchar(a[i] + '0');
		}
		else
		{
			q = a[i];
			while ( q != 0)
			{
				rem = q % 10;
				q = q / 10;
				putchar(rem + '0');
			}
		}
	}

	putchar('\n');
}
