#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcmp - comparing two strings
 *@s1: pointer to a string to be compared
 *@s2: pointer to another compared string
 *Return: 0, -1, 1 (depends on the string)
 */
int _strcmp(char *s1, char *s2)
{
	int res = strcmp(s1, s2);

	if (res < 0)
	{
		return (-15);
	}
	else if (res > 0)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
