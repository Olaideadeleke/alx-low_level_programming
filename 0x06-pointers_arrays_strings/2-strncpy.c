#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strncpy - Copys a string and states the n of charaters
 *@dest: Where we want to copy the string
 *@src: where the string was
 *@n: number of characters in a string
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
