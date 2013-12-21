#include "../includes/printf.h"

void	putwidth(const char **str, t_flag *flag)
{
	if (iswidth(**str))
		flag->width = getwidth(str);
}

int		iswidth(char c)
{
	return (ft_isdigit(c) || c == '*');
}

int		getwidth(const char **str)
{
	int			rslt;
	const char	*snbr;
	int			i;

	if(!(ft_isdigit(**str)))
	{
		if(**str == '*')
		{
			(*str)++;
			return (-1);

		}
		ft_putstr("Don't try to f**k with me mother**ker");
		exit (-1);
	}
	else
	{
		snbr = *str;
		i = 0;
		while(ft_isdigit(**str))
		{
			(*str)++;
			i++;
		}
		snbr = ft_strndup(snbr, i);
		rslt = ft_atoi(snbr);
	}
	return (rslt);
}
