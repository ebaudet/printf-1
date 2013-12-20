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
	if (isflag(**str))
	{
		flag->flag = **str;
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
	flag->flag = 0;
	flag->width = -1;
	flag->precision = -1;
	return (flag);
}
