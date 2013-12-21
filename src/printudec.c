#include "../includes/printf.h"

int		printudec(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int		rslt;
	int		size;

	nb = va_arg(args, unsigned int);
	size = nbuchar(nb) + flag->space + flag->plus;
	rslt = size < flag->width ? flag->width : size;
	if (flag->plus)
		ft_putchar('+');
	if (!flag->plus && flag->space)
		ft_putchar(' ');
	if (flag->minus)
	{
		ft_putunbr(nb);
		ft_printf_space(flag->width - size, flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - size, flag->zero);
		ft_putunbr(nb);
	}
	return (rslt);
}

int		nbuchar(unsigned int n)
{
	if (n == 4294567296)
		return (10);
	if (n < 10)
		return (1);
	else
		return (1 + nbchar(n / 10));
}

void	ft_putunbr(unsigned int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
}
