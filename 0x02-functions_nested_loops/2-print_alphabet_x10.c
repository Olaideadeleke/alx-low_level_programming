#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
