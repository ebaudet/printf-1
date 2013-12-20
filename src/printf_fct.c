#include "../includes/printf.h"

int		print_next_string(char **str, va_list args)
{
	int	rslt;

	if (**str != '%')
		rslt = print_string(str);
	else
		rslt = print_arg(str, args);
	return (rslt);
}

int		print_string(char **str)
{
	int	i;

	i = 0;
	while((*str)[i] && (*str)[i] != '%')
	{
		ft_putchar((*str)[i]);
		i++;
	}
	*str += i;
	return (i);
}

int		print_arg(char **str, va_list args)
{
	int	rslt;
	t_flag	*flag;

	flag = init_flag();
	(*str)++;
	getflag(str, flag);
	rslt = print_arg_flag(flag, args);
	return (rslt);
}

int		print_arg_flag(t_flag *flag, va_list args)
{
	int					rslt;
	int					i;
	t_spec				**specs;
	funptr				*printfunctions;

	printfunctions = init_fun_tab();
	specs = init_specs();
	i = 0;
	rslt = 0;
	while(i < TYPESNUM)
	{
		if (specs[i]->c == flag->specifier)
			rslt = (*printfunctions[specs[i]->s])(flag, args);
		i++;
	}
	return (rslt);
}

funptr	*init_fun_tab(void)
{

	static int	(*printfunctions[TYPESNUM])(t_flag *flag, va_list args) =
	{
		printdec,
		printudec,
		printoct,
		printhex,
		printhexu,
		printfloat,
		printfloatu,
		printscient,
		printscientu,
		printshort,
		printshortu,
		printhexfloat,
		printhexfloatu,
		printchar,
		printstr,
		printpointer,
		printnothing,
		printpercent
	};
	return (printfunctions);
}


