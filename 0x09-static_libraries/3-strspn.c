#include "main.h"
/**
 * strspn - program entry point
 * @s: input
 * Return: always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] =='/0')
				return (n);
		}
		s++;
	}
	return (n);
}
