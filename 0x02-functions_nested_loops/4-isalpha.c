#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *_isalpha - checks if a character is lower or uppercase
 *@c: integer character
 *Return: Always 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
