#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - Prints every other character
 *@str: Pointer to a string
 *Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int len;

	len = (strlen(str) - 1);
	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
