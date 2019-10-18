/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:02:35 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/17 15:05:57 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	c;

	len = ft_strlen(str) - 1;
	i = 0;
	while (len > i)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		len--;
		i++;
	}
	return (str);
}
