/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reflect_vec3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:06:20 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/16 14:14:36 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec3	ft_reflect_vec3(t_vec3 v, t_vec3 n)
{
	t_vec3 r;

	n = normalize_vec3(n);
	r = sub_vec3(v, mul_vec3(n, 2.0f * dot_vec3(v, n)));
	return (r);
}
