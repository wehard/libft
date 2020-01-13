/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:28:06 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/13 21:50:09 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_strtod(char *s)
{
	double nbr;
	int negative;
	int digits;
	int decimals;

	while (*s == ' ')
		s++;
	negative = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			negative = 1;
		s++;
	}
	nbr = 0.0;
	digits = 0;
	decimals = 0;
	while (ft_isdigit(*s))
	{
		nbr = nbr * 10.0 + (*s - '0');
		s++;
		digits++;
	}
	if (*s == '.')
	{
		s++;
		while (ft_isdigit(*s))
		{
			nbr = nbr * 10.0 + (*s - '0');
			s++;
			digits++;
			decimals++;
		}
	}
	while (decimals--)
	{
		nbr /= 10.0;
	}
	return (negative ? -nbr : nbr);
}
