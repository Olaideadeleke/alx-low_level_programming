#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 *string_toupper - Convert string to uppercase
 *@s: pointer to a string of characters
 *Return: Pointer to string of charater
 */
char *string_toupper(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
