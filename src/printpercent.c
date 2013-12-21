#include "../includes/printf.h"

int		printpercent(t_flag *flag, va_list args)
{
	flag = flag;
	args = args;
	write(1, "%", 1);
	return (1);
}
