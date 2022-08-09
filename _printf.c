#include <stdarg.h>
#include "main.h"
/**
 * format_func - Checks for right function for specific format
 * a - input from format
 * Return function for a specific format
 */
int (

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
		return NULL;
	}

	va_start(ap, format);
	//transverse through args in format
	while (format[i] != '\0')
	{
		//check if % is in list of args format
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			ptr = format_func(format[i + 1]);
			if (ptr == NULL)
		}

	}
}
