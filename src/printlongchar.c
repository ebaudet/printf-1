#include "../includes/printf.h"

int		printlongchar(t_flag *flag, va_list args)
{
	wint_t	c;
	int		rslt;

	rslt = flag->width > 1 ? flag->width : 1;
	c = (wint_t)va_arg(args, int);
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
	return (rslt);
}
