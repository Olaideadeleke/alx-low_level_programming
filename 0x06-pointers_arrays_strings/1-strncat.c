#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - concatenates two strings and use  n bytes from src
 *@dest: Where to copy the concetenated string
 *@src: the conctenated string
 *@n: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
