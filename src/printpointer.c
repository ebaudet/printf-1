#include "../includes/printf.h"

int		printpointer(t_flag *flag, va_list args)
{
	int					rslt;
	void				*addr;

	addr = va_arg(args, void *);
	flag = flag;
	ft_putstr("0x");
	rslt = ft_putuhex((long unsigned int)addr, 0, 1) + 4;
	return (rslt);
}
