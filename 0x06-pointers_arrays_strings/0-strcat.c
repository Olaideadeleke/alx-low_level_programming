#include"main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - Concatenate two strings
 *@dest: string that will take the concatenated string
 *@src: concatenated string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
