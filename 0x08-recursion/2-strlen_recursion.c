#include "main.h"
/**
 * _strlen_recursion - print the length
 *
 * @s: string
 *
 * Return: length of string as an int
 */
int _strlen_recursion(char*s)
{
	if (*s != '\0')
	{
		return (1 + _strenlen_recursion(s + 1));
	}
	return (0);
}
