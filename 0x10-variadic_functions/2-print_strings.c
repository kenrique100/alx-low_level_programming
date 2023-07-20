#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_strings - function that print a list of strings
*
* @separator: pointer to a constant separator
* @n: start of input variables
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int index;
char *str;
va_list ap;

va_start(ap, n);
for (index = 0; index < n; index++)
{
str = va_arg(ap, char *);
(str) ? printf("%s", str) : printf("(nil)");
if (separator != NULL && index < n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");

}
