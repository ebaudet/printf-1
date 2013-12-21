#include "../includes/printf.h"

void	putlength(const char **str, t_flag *flag)
{
	if (islength(**str))
	{
		flag->length = **str;
		(*str)++;
	}
}

int		islength(char c)
{
	return (c == 'h' || c == 'l' || c =='L');
}
