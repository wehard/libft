/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:26:28 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/20 16:50:27 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (src < dst)
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}
