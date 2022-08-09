#include <unistd.h>
/**
 * _putchar - prints a character c to stdout
 * @c: The character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
