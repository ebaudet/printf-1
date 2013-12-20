#include "../includes/printf.h"

int		printdec(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;
	nb = va_arg(args, int);
	rslt = 0;
	printf("%d\n",nb);
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printudec(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int		rslt;

	nb = va_arg(args, unsigned int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);

}

int		printoct(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhex(t_flag *flag, va_list args)
{
	int	nb;
	int	rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexu(t_flag *flag, va_list args)
{
	unsigned int	nb;
	int				rslt;

	nb = va_arg(args, int);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printfloat(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printfloatu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printscient(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printscientu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printshort(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printshortu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexfloat(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printhexfloatu(t_flag *flag, va_list args)
{
	double	nb;
	int		rslt;

	nb = va_arg(args, double);
	rslt = 0;
	//TODO
	flag = flag;
	nb = nb;
	return (rslt);
}

int		printchar(t_flag *flag, va_list args)
{
	char	c;
	int		rslt;

	c = (char)va_arg(args, int);
	rslt = 1;
	//TODO
	flag = flag;
	c = c;
	return (rslt);
}

int		printstr(t_flag *flag, va_list args)
{
	char	*s;
	int		rslt;

	s = va_arg(args, char*);
	rslt = 0;
	//TODO
	flag = flag;
	s = s;
	return (rslt);
}

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

int		printnothing(t_flag *flag, va_list args)
{
	intptr_t	ptr;
	int		rslt;

	ptr = va_arg(args, intptr_t);
	rslt = 0;
	//TODO
	flag = flag;
	ptr = ptr;
	return (rslt);
}

int		printpercent(t_flag *flag, va_list args)
{
	int	rslt;

	flag = flag;
	args = args;
	rslt = 1;
	write(1, "%", 1);
	return (rslt);
}
