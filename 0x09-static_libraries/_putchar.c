#include <unistd.h>

/**
* _putchar - function that writes the character c to stdout
*
* @c: Print character
*
* Return: on success 1
* on error, return -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
