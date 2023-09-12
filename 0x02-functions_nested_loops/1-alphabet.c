#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - Printing lowercase letters
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
