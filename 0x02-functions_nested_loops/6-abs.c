#include <stdio.h>
#include "main.h"
/**
 *_abs - print absolut value of an integer
 *@n: integer
 *Return: 0 and n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
