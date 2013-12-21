#include "../includes/printf.h"

int		ft_printf(const char *format, ...)
{
	va_list args;
	int	rslt;

	rslt = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%' || *(format + 1) != 'n')
			rslt += print_next_string(&format, args);
		else
		{
			*va_arg(args, int*) = rslt;
			format += 2;
		}
	}
	va_end(args);
	return (rslt);
}
