#include <stdio.h>
/**
 * main -prints it name, followed by anew line
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arg..
 *
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
