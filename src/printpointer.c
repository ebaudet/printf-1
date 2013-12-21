#include "../includes/printf.h"

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
