#include "main.h"
/**
 *print_diagonal - Print \
 *@n: number of times to print \
 *Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n; j > 0; j--)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
