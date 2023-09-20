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
	int i, num;

	for (i = n - 1; i >= 0; i--)
	{
		while (a[i] > 0)
		{
			num = (a[i]) % 10;
			_putchar('0' + num);
			(a[i]) /= 10;
		}
	}

	_putchar('\n');
}
