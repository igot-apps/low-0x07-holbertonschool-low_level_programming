#include "holberton.h"
/**
 * *_strcpy(char *dest, char *src) - copies the string pointed to by src
 *@dest: first value to check
 *@scr: Second value to check
 *
 */
char *_strcpy(char *dest, char *src)
{

	char *i = src;
	int j = 0;

	while (*i != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	return (dest);
}
