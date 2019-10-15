/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:14:55 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/15 16:21:41 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len && src[i] == '\0')
	{
		while (dst[i] != '\0')
		{
			dst[i] = '\0';
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
