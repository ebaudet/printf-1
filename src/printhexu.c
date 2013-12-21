#include "../includes/printf.h"

int		printhexu(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int				rslt;
	int				size;

	nb = va_arg(args, unsigned int);
	if (flag->length == 'l')
		return (printuhexu(flag, args));
	if (flag->sharp)
		ft_putstr("0X");
	if (flag->minus)
	{
		size = ft_puthex(nb, 0, 0);
		ft_printf_space(flag->width - size, flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - size, flag->zero);
		size = ft_puthex(nb, 0, 0);
	}
	size += (flag->sharp * 2);
	rslt = size < flag->width ? flag->width : size;
	return (rslt);
}
