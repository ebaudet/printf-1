#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h> /* A RETIRER */

# define TYPESNUM 20

typedef	enum
{
	DEC,
	UDEC,
	UOCT,
	UHEX,
	UHEXU,
	FLOAT,
	FLOATU,
	SCIENT,
	SCIENTU,
	SHORT,
	SHORTU,
	HEXFLOAT,
	HEXFLOATU,
	CHAR,
	STRING,
	POINTER,
	PERCENT,
	LONGCHAR,
	LONGSTRING
}	t_spec_enum;

typedef struct	s_flag
{
	char	length;
	char	specifier;
	int		sharp;
	int		zero;
	int		space;
	int		minus;
	int		plus;
	int		width;
	int		precision;
}		t_flag;

typedef struct	s_spec
{
	char		c;
	t_spec_enum	s;
}		t_spec;

typedef int (*funptr)(t_flag *, va_list);

/*
** ft_printf.c
*/
int		ft_printf(char *str, ...)__attribute__((format(printf, 1, 2)));

/*
** fonction_libft.c
*/
size_t	ft_strlen (const char *s);
size_t	ft_wstrlen (const wchar_t *s);
char	*ft_strndup(const char *s1, size_t n);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_putstr(char const *s);
void	ft_putwstr(wchar_t const *s);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
void	ft_putchar(char c);

/*
** flag_fct.c
*/
t_flag	*init_flag(void);
int		isflag(char c);
void	getflag(char **str, t_flag *flag);
void	putflag(char **str, t_flag *flag);

/*
** precision_fct.c
*/
int		getprecision(char **str);
int		isprecision(char c);
void	putprecision(char **str, t_flag *flag);

/*
** width_fct.c
*/
int		getwidth(char **str);
int		iswidth(char c);
void	putwidth(char **str, t_flag *flag);

/*
** specifier_fct.c
*/
int		isspecifier(char c);
void	putspecifier(char **str, t_flag *flag);
t_spec	*init_spec(char c, t_spec_enum s);
t_spec	**init_specs(void);
int		matchlengthspec(t_flag *flag);

/*
** printf_fct.c
*/
int		print_next_string(char **str, va_list args);
int		print_string(char **str);
int		print_arg(char **str, va_list args);
int		print_arg_flag(t_flag *flag, va_list args);
funptr	*init_fun_tab(void);

/*
** length_fct.c
*/
void	putlength(char **str, t_flag *flag);
int		islength(char c);

/*
** printdec.c
*/
int		printdec(t_flag *flag, va_list args);
int 	nbchar(int n);
void	ft_putnbr(int n);
void	ft_printf_space(int	n, int zero);

/*
** printudec.c
*/
int		printudec(t_flag *flag, va_list args);
int 	nbuchar(unsigned int n);
void	ft_putunbr(unsigned int n);

/*
** printoct.c
*/
int		printoct(t_flag *flag, va_list args);
int 	ft_putuoct(unsigned int n, int i);

/*
** printhex.c
*/
int		printhex(t_flag *flag, va_list args);
int 	ft_putuhex(unsigned int nb, int i, int lowercase);

/*
** other.c
*/
int		ft_printf(char *str, ...);
int		printhex(t_flag *flag, va_list args);
int		printhexu(t_flag *flag, va_list args);
int		printfloat(t_flag *flag, va_list args);
int		printfloatu(t_flag *flag, va_list args);
int		printscient(t_flag *flag, va_list args);
int		printscientu(t_flag *flag, va_list args);
int		printshort(t_flag *flag, va_list args);
int		printshortu(t_flag *flag, va_list args);
int		printhexfloat(t_flag *flag, va_list args);
int		printhexfloatu(t_flag *flag, va_list args);
int		printchar(t_flag *flag, va_list args);
int		printstr(t_flag *flag, va_list args);
int		printpointer(t_flag *flag, va_list args);
int		printpercent(t_flag *flag, va_list args);
int		printlongchar(t_flag *flag, va_list args);
int		printlongstring(t_flag *flag, va_list args);

#endif /* !PRINTF_H */
