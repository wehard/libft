/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul_dir_vec3_mat4.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:24:10 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/13 23:04:55 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "vec3.h"

t_vec3		ft_mul_dir_vec3_mat4(t_vec3 in, t_mat4x4 m)
{
	t_vec3	o;

	o.x = in.x * m.m[0][0] + in.y * m.m[1][0] + in.z * m.m[2][0];
	o.y = in.x * m.m[0][1] + in.y * m.m[1][1] + in.z * m.m[2][1];
	o.z = in.x * m.m[0][2] + in.y * m.m[1][2] + in.z * m.m[2][2];
	return (o);
}
