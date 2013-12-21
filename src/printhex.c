#include "../includes/printf.h"

int		printhex(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int				rslt;
	int				size;

	if (flag->length == 'l')
		return (printuhex(flag, args));
	else
	{
		nb = va_arg(args, unsigned int);
		if (flag->sharp)
			ft_putstr("0x");
		if (flag->minus)
		{
			size = ft_puthex(nb, 0, 1);
			ft_printf_space(flag->width - size, flag->zero);
		}
		else
		{
			ft_printf_space(flag->width - size, flag->zero);
			size = ft_puthex(nb, 0, 1);
		}
		size += (flag->sharp * 2);
		rslt = size < flag->width ? flag->width : size;
		return (rslt);
	}
}

int		ft_puthex(unsigned int nb, int i, int lowercase)
{
	int	l;

	i++;
	if (lowercase)
		l = 97;
	else
		l = 65;
	if (nb < 16)
	{
		if (nb > 9)
			ft_putchar(nb - 10 + l);
		else
			ft_putchar(nb + 48);
	}
	else
	{
		i = ft_puthex(nb / 16, i, lowercase);
		ft_puthex(nb % 16, i, lowercase);
	}
	return (i);
}
