/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:41:29 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/15 16:10:48 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (n <= 0 || dst == src)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n-- && *s)
	{
		if (*s != (unsigned char)c)
		{
			*d++ = *s++;
		}
		else
		{
			return (d++);
		}
	}
	return (NULL);
}
