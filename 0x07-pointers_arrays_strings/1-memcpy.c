#include "main.h"
/**
 * _memcpy - functdion thdat cdopies mdemory area
 *@dest: the addresds of memdory to pridnt
 *@src: second valde
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
