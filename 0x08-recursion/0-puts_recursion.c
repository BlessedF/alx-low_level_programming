#include "main.h"

/**
 *  * _puts_recursion - Writes a character to the standard output (stdout)
 *   * @s: The character to be written
 *    *
 *     * Return: nothing
 *      */
void _puts_recursion(char *s)
	    {
		    if (*s != '\0')
		    {
			    _putchar(*s);
			    _puts_recursion(s + 1);
		    }
		    if (*s == '\0')
		    {
			    _putchar('\n');
		  }
	    }
