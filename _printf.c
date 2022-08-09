#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * format_func - Checks for right function for specific format
 * a - input from format
 * Return function for a specific format
 */
int (*check_spec(const char *format))(va_list)
{
	unsigned int i;
	print_type spec[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}

	};

	for (i = 0; spec[i].typ != NULL; i++)
	{
		if (*spec[i].typ == *format)
			break;
	}
	return (spec[i].fmt);
}

/**
 * _printf - A function that accept unknown number of args
 * @format - Unknown number of args
 * Return: return a formatted args
 */
int _printf(const char* format, ...)
{
	int i = 0;
	int counter = 0;

	//create a function pointer
	int (*ptr)(va_list);

	//instantiate va_list
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);
	//transverse through args in format
	while (format[i])
	{
		//check if % is in list of args format
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			counter++;
		}
		if (!format[i])
			return counter;
		ptr = check_spec(&format[i + 1]);
		if (ptr != NULL)
		{
			counter += ptr(ap);
			i +=2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		counter++;
		if (format[i + 1] == '%')
			i + =2;
		else
			i++;
	}
	va_end(ap);
	return counter;
}
