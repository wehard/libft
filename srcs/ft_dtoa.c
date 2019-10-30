/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:36:01 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/30 11:34:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dtoa(double d, unsigned int precision)
{
	size_t	len;
	double	db;
	int		dpart;
	int		fpart;
	char	*str;

	db = d < 0 ? d * -1.0 : d;
	dpart = db;
	db -= dpart;
	db *= ft_pow(10, precision);
	fpart = (unsigned long int)(db + 0.5);
	len = ft_ndigits(dpart) + ft_ndigits(fpart) + (d < 0) + 1;
	if (!(str = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (d < 0)
		ft_strcat(str, "-");
	ft_strcat(str, ft_itoa(dpart));
	ft_strcat(str, ".");
	ft_strcat(str, ft_itoa(fpart));
	return (str);
}
