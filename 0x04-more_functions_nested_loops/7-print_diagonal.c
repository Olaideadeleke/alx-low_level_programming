#include "main.h"
/**
 *print_diagonal - Print \
 *@n: number of times to print \
 *Return: Nothing
 */
void print_diagonal(int n)
{
	int i, k, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n; j > n - 1; j--)
			{
				for (k = n; k > 0; k--)
				{
					_putchar(92);
				}
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
