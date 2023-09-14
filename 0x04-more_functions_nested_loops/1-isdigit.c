#include "main.h"
#include <ctype.h>
/**
 *_isdigit - Checks for digits from 1 to 9
 *@c: Variable for digit
 *Return: Always 0 and 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
