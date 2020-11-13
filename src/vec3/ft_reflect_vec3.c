/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reflect_vec3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:06:20 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/13 23:02:35 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

t_vec3	ft_reflect_vec3(t_vec3 v, t_vec3 n)
{
	t_vec3 r;

	n = ft_normalize_vec3(n);
	r = ft_sub_vec3(v, ft_mul_vec3(n, 2.0f * ft_dot_vec3(v, n)));
	return (r);
}
