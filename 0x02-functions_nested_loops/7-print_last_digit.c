#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - Print out last digit
 *@n: last digit
 *Return: 0 and n
 */
int print_last_digit(int n)
{

	if (n > 0)
	{
		return (n % 10);
	}
	if (n < 0)
	{
		return (-n % 10);
	}
	else
		return (n);
}
