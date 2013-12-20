/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_fct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:48:16 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 14:48:45 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	putwidth(char **str, t_flag *flag)
{
	if (iswidth(**str))
		flag->width = getwidth(str);
}

int		iswidth(char c)
{
	return (ft_isdigit(c) || c == '*');
}

int		getwidth(char **str)
{
	int	rslt;
	char	*snbr;
	int	i;

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
