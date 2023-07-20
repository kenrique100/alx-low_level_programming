#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - function that sums all its params
  *
  * @n: number of args
  *
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int params, sum;
	va_list ap;

/* initialize the arg list from the start */
	if (n == 0)
		return (0);
	va_start(ap, n);

    /* checks through all param values*/
	for (params = sum = 0; params < n; params++)
	{
        /* get the next param value and sums it to the sum */
		sum += va_arg(ap, int);
	}
    /* clean up function */
	va_end(ap);
	return (sum);
}