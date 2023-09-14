#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *int _isupper - Print letters in uppercase
 *Return: 1 and 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
