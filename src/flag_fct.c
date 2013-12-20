#include "../includes/printf.h"

void	getflag(char **str, t_flag *flag)
{
	putflag(str, flag);
	putwidth(str, flag);
	putprecision(str, flag);
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
	return (flag);
}
