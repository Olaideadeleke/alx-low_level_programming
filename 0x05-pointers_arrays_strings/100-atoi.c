#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_atoi - Changes string to an integer
 *@s: string name
 *Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int x, y;

	x = atoi(s);
	y = (x >= 0) ? x : -x;

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		return (y);
	}
}
