#include "../includes/printf.h"

int		printhexu(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int				rslt;
	int				size;

	nb = va_arg(args, unsigned int);
	if (flag->plus)
		ft_putchar('+');
	if (!flag->plus && flag->space)
		ft_putchar(' ');
	if (flag->minus)
	{
		size = ft_putuhex(nb, 0, 0);
		ft_printf_space(flag->width - size, flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - size, flag->zero);
		size = ft_putuhex(nb, 0, 0);
	}
	size += flag->space + flag->plus;
	rslt = size < flag->width ? flag->width : size;
	return (rslt);
}