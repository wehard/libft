/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:26:28 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/17 14:09:29 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (src == dst)
		return (dst);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (src < dst)
	{
		i = 0;
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dst);
}
