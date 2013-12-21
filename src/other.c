#include "../includes/printf.h"

int		printudec(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int		rslt;

	nb = va_arg(args, unsigned int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);

}

int		printoct(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhex(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexu(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int				rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printfloat(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printfloatu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printscient(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printscientu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printshort(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printshortu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexfloat(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexfloatu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

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

int		printstr(t_flag *flag, va_list args)
{
	char	*s;
	int		rslt;

	if (flag->length == 'l')
		return (printlongstring(flag, args));
	s = va_arg(args, char*);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	rslt = flag->width > (int)ft_strlen(s) ? flag->width : (int)ft_strlen(s);
	if (flag->minus)
	{
		ft_putstr(s);
		ft_printf_space(flag->width - ft_strlen(s), flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - ft_strlen(s), flag->zero);
		ft_putstr(s);
	}
	s = s;
	return (rslt);
}

int		printpointer(t_flag *flag, va_list args)
{
	intptr_t	address;
	int		rslt;

	address = va_arg(args, intptr_t);
	rslt = 0;
	//TODO
	flag = flag;
	address = address;
	return (rslt);
}

int		printnothing(t_flag *flag, va_list args)
{
	int	*ptr;
	int	rslt;

	ptr = va_arg(args, int*);
	rslt = 0;
	flag = flag;
	ptr = ptr;
	return (rslt);
}

int		printpercent(t_flag *flag, va_list args)
{
	flag = flag;
	args = args;
	write(1, "%", 1);
	return (1);
}

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

int		printlongstring(t_flag *flag, va_list args)
{
	wchar_t	*s;
	int		rslt;

	s = (wchar_t*)va_arg(args, char*);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	rslt = flag->width > (int)ft_wstrlen(s) ? flag->width : (int)ft_wstrlen(s);
	if (flag->minus)
	{
		ft_putwstr(s);
		ft_printf_space(flag->width - ft_wstrlen(s), flag->zero);
	}
	else
	{
		ft_printf_space(flag->width - ft_wstrlen(s), flag->zero);
		ft_putwstr(s);
	}
	return (rslt);
}
