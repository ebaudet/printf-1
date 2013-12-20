/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_fct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:39:49 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 14:47:06 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	getflag(char **str, t_flag *flag)
{
	putflag(str, flag);
	putwidth(str, flag);
	putprecision(str, flag);
	putspecifier(str, flag);
}

void	putflag(char **str, t_flag *flag)
{
	if (isflag(**str))
	{
		flag->flag = **str;
		(*str)++;
	}
}

int		isflag(char c)
{
	return (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0');
}

t_flag	*init_flag(void)
{
	t_flag *flag;

	flag = (t_flag*)malloc(sizeof(t_flag));
	return (flag);
}
