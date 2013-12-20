/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_fct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:44:45 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 16:20:16 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	putspecifier(char **str, t_flag *flag)
{
	if (isspecifier(**str))
	{
		flag->specifier = **str;
		(*str)++;
	}
	else
	{
		ft_putstr("You try to f*** me mother f***er ?!");
		exit (-1);
	}
}

int		isspecifier(char c)
{
	return (c == 'd' || c == 'i' || c == 'u' || c == 'o' || c == 'x' || c == 'X' || c == 'f' || c == 'F' || c == 'e' || c == 'E' || c == 'g' || c == 'G' || c == 'a' || c == 'A' || c == 'c' || c == 's' || c == 'p' || c == 'n' || c == '%');
}

t_spec	*init_spec(char c, t_spec_enum s)
{
	t_spec	*spec;

	spec = (t_spec*)malloc(sizeof(t_spec));
	spec->c = c;
	spec->s = s;
	return (spec);
}

t_spec	**init_specs(void)
{
	t_spec	**specs;

	specs = malloc((TYPESNUM + 1) * sizeof(t_spec*));
	specs[0] = init_spec('d',DEC);
	specs[1] = init_spec('i',DEC);
	specs[2] = init_spec('u',UDEC);
	specs[3] = init_spec('o',UOCT);
	specs[4] = init_spec('x',UHEX);
	specs[5] = init_spec('X',UHEXU);
	specs[6] = init_spec('f',FLOAT);
	specs[7] = init_spec('F',FLOATU);
	specs[8] = init_spec('e',SCIENT);
	specs[9] = init_spec('E',SCIENTU);
	specs[10] = init_spec('g',SHORT);
	specs[11] = init_spec('G',SHORTU);
	specs[12] = init_spec('a',HEXFLOAT);
	specs[13] = init_spec('A',HEXFLOATU);
	specs[14] = init_spec('c',CHAR);
	specs[15] = init_spec('s',STRING);
	specs[16] = init_spec('p',POINTER);
	specs[17] = init_spec('n',NOTHING);
	specs[18] = init_spec('%',PERCENT);
	return (specs);
}
