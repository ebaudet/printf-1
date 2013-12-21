#include "../includes/printf.h"

int		printchar(t_flag *flag, va_list args)
{
	char	c;
	int		rslt;

	if (flag->length == 'l')
		rslt = printlongchar(flag, args);
	else
	{
		rslt = flag->width > 1 ? flag->width : 1;
		c = (char)va_arg(args, int);
		if (flag->minus)
		{
			ft_putchar(c);
			ft_printf_space(flag->width - 1, flag->zero);
		}
		else
		{
			ft_printf_space(flag->width - 1, flag->zero);
			ft_putchar(c);
		}
	}
	return (rslt);
}
