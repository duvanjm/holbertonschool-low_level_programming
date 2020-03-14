#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - function
 *@n: number of strings
 *@separator: string
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			p = va_arg(valist, char *);
			if (p == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", p);
			}
			if (i < n - 1)
			{
				if (separator != NULL)
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s", va_arg(valist, char*));

		}
		va_end(valist);
	}
	printf("\n");
}
