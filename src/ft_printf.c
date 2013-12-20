#include "../includes/printf.h"

int		ft_printf(char *str, ...)
{
	va_list args;
	int	rslt;

	rslt = 0;
	va_start(args, str);
	while (*str)
	{
		rslt += print_next_string(&str, args);
	}
	va_end(args);
	return (rslt);
}
