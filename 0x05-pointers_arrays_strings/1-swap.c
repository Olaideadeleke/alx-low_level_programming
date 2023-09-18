#include "main.h"
#include <stdio.h>
/**
 *swap_int - Swap two integers
 *@a: First integer
 *@b: Second integer
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
