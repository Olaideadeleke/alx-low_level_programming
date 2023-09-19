#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - Print in reverse
 *@s: Character to a pointer
 *Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	if (len == 0)
	{
		return;
	}
	else
	{
		for (i = len; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
