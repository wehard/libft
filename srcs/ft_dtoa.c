/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:36:01 by wkorande          #+#    #+#             */
/*   Updated: 2019/11/28 00:41:23 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"



static long double	ft_atod(char *str)
{
	long double d;

	d = 0;
	while (*str)
	{
		d *= 10;
		d += (long double)(*str - '0');
		++str;
	}
	return (d);
}

static int			ft_count_dec(long double d)
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

static char			*ft_fractoa(long double d, int precision, char *dec)
{
	char	*s;
	int		i;

	i = 0;
	d = d < 0 ? -d : d;
	d -= ft_atod(dec);
	if (!(s = (char*)ft_memalloc(precision + 1)))
		return (NULL);
	while (i < precision)
	{
		d *= 10;
		s[i++] = (d > 0) ? (int)d + '0' : '0';
		d -= (int)d;
	}
	return (s);
}

static char			*ft_dectoa(long double d)
{
	char		*str;
	char		*ptr;
	int			count;
	int			i;
	long double	d_tmp;

	count = ft_count_dec(d);
	if (!(str = (char*)ft_memalloc(count + 1)))
		return (NULL);

	ptr = str;
	while (count)
	{
		i = count - 1;
		d_tmp = d;
		while (i--)
			d_tmp /= 10;
		*ptr++ = (int)d_tmp + '0';
		d_tmp = (int)d_tmp;
		while (++i < count - 1)
			d_tmp *= 10;
		d -= d_tmp;
		--count;
	}
	return (str);
}

/* static long double	ft_dtoa_round(long double d, int precision)
{
	long double	d_tmp;
	char		*s_dec;
	//char		*s_frac;

	d = d < 0 ? -d : d;
	d_tmp = d * ft_pow(10, precision);
	s_dec = ft_dectoa(d_tmp);
	//s_frac = ft_fractoa(d_tmp, precision, s_dec);
	d_tmp -= ft_atod(s_dec);
	free(s_dec);
	if (d_tmp > 0.5 || (d_tmp == 0.5 && (s_dec[ft_strlen(s_dec) - 1] - '0') % 2 == 0))
		d += 0.5 * ft_pow(10, -precision);
	return (d);
} */

char				*ft_dtoa(long double d, int precision)
{
	char	*str;
	char	*dec;
	char	*frac;
	char	*dot;
	long double r;

	r = d; //ft_dtoa_round(d, precision);
	dec = ft_dectoa(r);
	frac = ft_fractoa(r, precision, dec);
	dot = ft_strjoin(dec, ".");
	str = ft_strjoin(dot, frac);
	free(dot);
	free(dec);
	free(frac);
	return (str);
}
