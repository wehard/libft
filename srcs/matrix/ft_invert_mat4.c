/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invert_mat4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:06:21 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/23 19:17:03 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "libft.h"
#include "ft_printf.h"

static double	calc_d_sub_matrix(t_mat3x3 m)
{
	double d;

	d = m.m[0][0] * ((m.m[1][1] * m.m[2][2]) - (m.m[2][1] * m.m[1][2]));
	d -= m.m[0][1] * ((m.m[1][0] * m.m[2][2]) - (m.m[1][2] * m.m[2][0]));
	d += m.m[0][2] * ((m.m[1][0] * m.m[2][1]) - (m.m[1][1] * m.m[2][0]));
	return (d);
}

t_mat4x4		ft_invert_mat4(t_mat4x4 t)
{
	t_mat4x4 id;
	id = t;
	t_mat3x3 sub;

	sub.m[0][0] = 6;
	sub.m[0][1] = 1;
	sub.m[0][2] = 1;

	sub.m[1][0] = 4;
	sub.m[1][1] = -2;
	sub.m[1][2] = 5;

	sub.m[2][0] = 2;
	sub.m[2][1] = 8;
	sub.m[2][2] = 7;

	ft_printf("det 3x3: %f\n", calc_d_sub_matrix(sub));
	return (id);
}
