/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:52:40 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/17 16:53:32 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	if (!s || !f)
		return (NULL);
	map = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!map)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		map[i] = f(s[i], i);
		i++;
	}
	map[i] = '\0';
	return (map);
}
