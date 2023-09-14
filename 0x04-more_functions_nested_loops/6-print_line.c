#include "main.h"
/**
 *print_line - print a straight line
 *@n: the num of times to print _
 *Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
