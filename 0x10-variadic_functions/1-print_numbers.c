#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - prints numbers
*
* @separator: character to use to delimit
* @n: number of elements to print
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
va_list ap;

va_start(ap, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL && index < n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");

}
