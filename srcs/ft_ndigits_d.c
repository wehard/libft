/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigits_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:34:18 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/12 13:35:48 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ndigits_d(long double d)
{
	int count;

	count = 0;
	while (d > 1)
	{
		count++;
		d /= 10;
	}
	return (ft_max(count, 1));
}
