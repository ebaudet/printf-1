#include "../includes/printf.h"

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
