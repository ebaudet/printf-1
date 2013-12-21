#include "../includes/printf.h"

void	putprecision(const char **str, t_flag *flag)
{
	if (isprecision(**str))
		flag->precision = getprecision(str);
}

int		isprecision(char c)
{
	return (c == '.');
}

int		getprecision(const char **str)
{
	int	rslt;
	(*str)++;
	rslt = getwidth(str);
	return (rslt);
}
