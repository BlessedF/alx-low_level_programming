#include "main.h"

/**
 * _memcpy - function copies @n bytes from mmeory arear to memeory @src
 * @n: function copies
 * @src: bytes from memory areas
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
