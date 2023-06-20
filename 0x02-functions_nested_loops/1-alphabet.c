#include "main.h"

/**
* print_alphabet - This function prints the alphabets in lowercase followed by a new line
*
* Return: Success 0
*/

void print_alphabet(void)
{
char ch;

ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}	_putchar('\n');
}
