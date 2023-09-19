#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints second half of a string
 *@str: pointer to a string
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int len, n;

	len = (strlen(str) - 1);
	n = len / 2;
	for (i = n + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
