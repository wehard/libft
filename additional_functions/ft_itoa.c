/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:46:08 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/17 15:51:31 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		negative;
	int		i;

	if (!(str = (char*)malloc(sizeof(char) * 13)))
		return (NULL);
	i = 0;
	negative = 0;
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}
