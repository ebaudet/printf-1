/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_libft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <lfouquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:27:19 by lfouquet          #+#    #+#             */
/*   Updated: 2013/12/20 16:29:32 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

size_t	ft_strlen (const char *s)
{
	long unsigned int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if ((unsigned int)c >= '0' && (unsigned int)c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	value = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == '\v')
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;
	int		length;

	length = ft_strlen(s1) < n ? ft_strlen(s1) : n;
	if (s1 == NULL)
		return (NULL);
	copy = (char *)malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);
	return (ft_strncpy(copy, s1, length));
}

void	ft_putstr(char const *s)
{
	if (s != NULL)
		write(1, s, ft_strlen(s));
}

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*temp_s1;

	temp_s1 = s1;
	while (n && *s2 != '\0')
	{
		*s1++ = *s2++;
		n--;
	}
	while (n--)
		*s1++ = '\0';
	return (temp_s1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
