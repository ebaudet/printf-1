#include "../includes/printf.h"

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
