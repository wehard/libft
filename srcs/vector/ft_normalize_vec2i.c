/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize_vec2i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:23:55 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/07 14:24:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec2i	ft_normalize_vec2i(t_vec2i v)
{
	t_vec2i new;
	double l;

	l = ft_len_vec2i(v);
	new = ft_div_vec2i(v, l);
	return (new);
}
