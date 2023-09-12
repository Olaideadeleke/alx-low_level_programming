#include "main.h"
#include <stdio.h>
/**
 *print_sign - Printing signs
 *@n: integer
 *Return: Always 0, -1 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
