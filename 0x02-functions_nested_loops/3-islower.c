#include "main.h"
#include <stdio.h>
/**
 *_islower - return 1 if c is lowercase
 *@c: variable containing the letters
 *Return: Always 1 or 0 (Success)
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
