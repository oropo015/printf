#include <stdarg.h>
/**
 * struct print_st - create a stucture to check list format handlers
 * @typ - char input to compare with
 * @fmt - address pointer for the function
 */
typedef struct print_st
{
	char *typ;
	int (*fmt)(va_list);
}print_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_str(va_list s);
