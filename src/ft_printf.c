/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:30:18 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 16:25:19 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int		ft_printf(char *str, ...)
{
	va_list args;
	int	rslt;

	rslt = 0;
	va_start(args, str);
	while (*str)
	{
		rslt += print_next_string(&str, args);
	}
	va_end(args);
	return (rslt);
}
