/**
 * struct check_fmt - create a stucture to check list format handlers
 * @get_fmt - char input to compare with
 * @p - address pointer for the function
 */
typedef struct check_fmt
{
	char get_fmt;
	int (*p)(va_list);
}fmt_checker;
