#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c and prints @c  to stdout
 *
 * Return: always 0 success 1.
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
