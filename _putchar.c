#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

<<<<<<< HEAD
file: print_ % .c
=======
file: print_%.c
>>>>>>> 72c40bbb4c4a75e520b671d7519ac527a6f31034

#include "main.h"
/**
 * print_37 - prints the char %.
 * Return: 1.
 */
int print_37(void)
{
	_putchar(37);
<<<<<<< HEAD
	return (1);
=======
	return (1);
>>>>>>> 72c40bbb4c4a75e520b671d7519ac527a6f31034
}
