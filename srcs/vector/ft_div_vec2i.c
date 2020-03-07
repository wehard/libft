/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_vec2i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:28:15 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/07 14:28:47 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec2i	ft_div_vec2i(t_vec2i v, int t)
{
	t_vec2i new;

	if (t == 0)
		return (v);
	new.x = v.x / t;
	new.y = v.y / t;
	return (new);
}
