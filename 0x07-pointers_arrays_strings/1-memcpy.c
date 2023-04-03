#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @n: bytes to be copied
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for ( ; a < b; a++)
	{
	dest[a] = src[a];
	n--;
	}
	return (dest);
}

