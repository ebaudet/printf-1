#include "../includes/printf.h"

int			printoct(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int			rslt;
	int			size;

	nb = va_arg(args, unsigned int);
	if (flag->plus)
		ft_putchar('+');
	if (!flag->plus && flag->space)
		ft_putchar(' ');
	if (flag->minus)
	{
		size = ft_putuoct(nb, 0);
		ft_printf_space(flag->width - size, flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - size, flag->zero);
		size = ft_putuoct(nb, 0);
	}
	size += flag->space + flag->plus;
	rslt = size < flag->width ? flag->width : size;
	return (rslt);
}

int		ft_putuoct(unsigned int n, int i)
{
	i++;
	if (n < 8)
		ft_putchar(n + 48);
	else
	{
		i = ft_putuoct(n / 8, i);
		ft_putuoct(n % 8, i);
	}
	return (i);
}
