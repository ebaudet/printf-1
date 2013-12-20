#include "../includes/printf.h"

int		ft_printf(char *str, ...)
{
	va_list args;
	int	rslt;

	rslt = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%' || *(str + 1) != 'n')
			rslt += print_next_string(&str, args);
		else
		{
			*va_arg(args, int*) = rslt;
			str += 2;
		}
	}
	va_end(args);
	return (rslt);
}
