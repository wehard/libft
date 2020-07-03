/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_vec2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:15:48 by wkorande          #+#    #+#             */
/*   Updated: 2020/07/03 19:51:33 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "libft.h"

t_vec2	ft_parse_vec2(char *str)
{
	t_vec2	v;
	char	*token;

	str = ft_strstr(str, " ");
	token = ft_strtok(str, " ");
	v.x = ft_strtod(token);
	token = ft_strtok(NULL, " ");
	v.y = ft_strtod(token);
	return (v);
}
