/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_vec3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:04:20 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/13 23:01:59 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

t_vec3	ft_div_vec3(t_vec3 v, double t)
{
	t_vec3 new;

	if (t == 0.0)
		return (v);
	new.x = v.x / t;
	new.y = v.y / t;
	new.z = v.z / t;
	return (new);
}