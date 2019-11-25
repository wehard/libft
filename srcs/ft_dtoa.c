/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:36:01 by wkorande          #+#    #+#             */
/*   Updated: 2019/11/25 13:10:18 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_fractoa(long double d, int precision)
{
	char		*str;
	char		*tmp;
	char		*zeros;
	uint64_t	intf;
	int			numz;

	if (d < 0)
		d = -d;
	intf = (uint64_t)((d * ft_pow(10, precision)) + 0.5);
	tmp = ft_itoa_uint64(intf);
	if (ft_strlen(tmp) < (size_t)precision)
	{
		numz = precision - ft_strlen(tmp);
		zeros = ft_strnew(numz);
		ft_bzero(zeros, numz);
		ft_memset(zeros, '0', numz);
		str = ft_strjoin(zeros, tmp);
		free(zeros);
	}
	else
		str = ft_strdup(tmp);
	free(tmp);
	return (str);
}

char		*ft_dtoa(long double d, int precision)
{
	char	*str;
	char	*ds;
	char	*fs;
	char	*t;

	if (!precision)
		return (ft_itoa_int64((int64_t)d));
	ds = ft_itoa_int64((int64_t)d);
	fs = ft_fractoa(d - (int64_t)d, precision);
	t = ft_strjoin(ds, ".");
	str = ft_strjoin(t, fs);
	free(t);
	free(ds);
	free(fs);
	return (str);
}
