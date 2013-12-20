/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_fct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:45:43 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 14:48:02 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	putprecision(char **str, t_flag *flag)
{
	if (isprecision(**str))
		flag->precision = getprecision(str);
}

int		isprecision(char c)
{
	return (c == '.');
}

int		getprecision(char **str)
{
	int	rslt;
	(*str)++;
	rslt = getwidth(str);
	return (rslt);
}
