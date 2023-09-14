#include "main.h"
/**
 *more_numbers - print 1- 14 10 times
 *Return: Nothing
 */
void more_numbers(void)
{
	int i, j;
	int n, r;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			n = (j > 9) ? ((j / 10) + '0') : (j + '0');
			r = (j % 10) + '0';
			_putchar(n);
			if (j > 9)
			{
				_putchar(r);
			}
		}
		_putchar('\n');
	}
}
