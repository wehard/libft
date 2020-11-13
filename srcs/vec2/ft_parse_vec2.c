/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_vec2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:15:48 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/13 23:01:21 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"
#include "libft.h"

t_vec2	ft_parse_vec2(char *str)
{
	t_vec2	v;
	char	*token;

	str = ft_strstr(str, " ");
	token = ft_strtok(str, " ");
	if ((!token) && (!(v.x = 0)))
		ft_putendl("Couldn't parse vector2 x, set to 0");
	else
		v.x = ft_strtod(token);
	token = ft_strtok(NULL, " ");
	if ((!token) && (!(v.y = 0)))
		ft_putendl("Couldn't parse vector2 y, set to 0");
	else
		v.y = ft_strtod(token);
	return (v);
}
