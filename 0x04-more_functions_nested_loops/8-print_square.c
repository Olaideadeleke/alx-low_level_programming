#include "main.h"
/**
 *print_square - print square #
 *@size: size
 *Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
