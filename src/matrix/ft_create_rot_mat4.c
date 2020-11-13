/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rot_mat4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:00:09 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/13 23:04:29 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "vec3.h"
#include <math.h>

t_mat4x4	ft_create_rot_mat4(t_vec3 deg_angle)
{
	t_mat4x4 mat;

	mat = ft_create_roty_mat4(deg_angle.y * (M_PI / 180.0f));
	mat = ft_mul_mat4_mat4(mat,
		ft_create_rotx_mat4(deg_angle.x * (M_PI / 180.0f)));
	mat = ft_mul_mat4_mat4(mat,
		ft_create_rotz_mat4(deg_angle.z * (M_PI / 180.0f)));
	return (mat);
}
