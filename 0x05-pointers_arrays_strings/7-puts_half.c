#include "main.h"
/**
 * _strlen - rteurns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		s++;
		longi++;
	}
	return (longi);
}
