#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"


int _printf(const char *format, ...)
{
	int  i = 1, k = 1;
	int n_displayed = 0;
	char *str = NULL;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '#')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else if (format[i + 2] == '#')
		{
			i++;
			_putchar('#');
			n_displayed++;
		}
		

		i++;
	}

	va_end(args);
	return (n_displayed);
}
