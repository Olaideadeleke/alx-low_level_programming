#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
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
