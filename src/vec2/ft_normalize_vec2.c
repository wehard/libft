/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize_vec2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:23:55 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/22 14:02:27 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

t_vec2	ft_normalize_vec2(t_vec2 v)
{
	t_vec2 new;
	float l;

	l = ft_len_vec2(v);
	new = ft_div_vec2(v, l);
	return (new);
}
