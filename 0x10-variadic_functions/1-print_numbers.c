#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - function
 *@n: number of int
 *@separator: string
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return;
		}
		if (i < n - 1)
		{
			printf("%d%s", va_arg(valist, int), separator);
		}
		else
		{
			printf("%d", va_arg(valist, int));
		}
			va_end(valist);
	}
	printf("\n");
}
