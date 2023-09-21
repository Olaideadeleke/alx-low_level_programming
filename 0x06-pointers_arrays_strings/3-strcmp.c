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
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (s1 < s2)
	{
		return (-1);
	}
	else if (s1 > s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
