#include "../includes/printf.h"

void	getflag(char **str, t_flag *flag)
{
	putflag(str, flag);
	putwidth(str, flag);
	putprecision(str, flag);
	putlength(str, flag);
	putspecifier(str, flag);
}

void	putflag(char **str, t_flag *flag)
{
	while (isflag(**str))
	{
		if ((**str) == '#')
			flag->sharp = 1;
		if ((**str) == '0')
			flag->zero = 1;
		if ((**str) == ' ')
			flag->space = 1;
		if ((**str) == '-')
			flag->minus = 1;
		if ((**str) == '+')
			flag->plus = 1;
		(*str)++;
	}
}

int		isflag(char c)
{
	return (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0');
}

t_flag	*init_flag(void)
{
	t_flag *flag;

	flag = (t_flag*)malloc(sizeof(t_flag));
	flag->length = 0;
	flag->specifier = 0;
	flag->sharp = 0;
	flag->zero = 0;
	flag->space = 0;
	flag->minus = 0;
	flag->plus = 0;
	flag->width = -1;
	flag->precision = -1;
	return (flag);
}
