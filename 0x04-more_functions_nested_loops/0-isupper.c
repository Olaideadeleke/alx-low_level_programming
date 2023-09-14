#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isupper - Print letters in uppercase
 *@c: integer character
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
