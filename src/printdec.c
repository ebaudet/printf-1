#include "../includes/printf.h"

int		printdec(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;
	nb = va_arg(args, int);
	rslt = count_number(nb) < flag->width ? flag->width : count_number(nb);

	if (flag->flag == '-')
	{
		ft_putnbr(nb);
		ft_printf_space(flag->width  - count_number(nb), flag->flag);
	}
	else
	{
		ft_printf_space(flag->width  - count_number(nb), flag->flag);
		ft_putnbr(nb);
	}
	//if (flag->width > count_number(nb))

	return (rslt);
}

int 	count_number(int n)
{
	if (n == 2147483647 || n == -2147483648)
		return (10);
	if (n < 10)
		return (1);
	else
		return (1 + count_number(n / 10));
}

void    ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n < 10)
			ft_putchar(n + 48);
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}

void	ft_printf_space(int	n, int zero)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		i++;
	}
}
