/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:26:28 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/16 14:43:00 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	t[len];

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = t[i];
		i++;
	}
	return (dst);
}
