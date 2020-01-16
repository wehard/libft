/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:47:41 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/16 15:10:25 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec3			ft_make_vec3(double x, double y, double z);
void			ft_set_vec3(t_vec3 *v, double x, double y, double z);
t_vec3			ft_add_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			ft_sub_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			ft_mul_vec3(t_vec3 v, double t);
t_vec3			ft_mul_vec3_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			ft_div_vec3(t_vec3 v, double t);
double			ft_len_vec3(t_vec3 v1);
double			ft_dot_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			ft_normalize_vec3(t_vec3 v);
t_vec3			ft_invert_vec3(t_vec3 v);
t_vec3			ft_reflect_vec3(t_vec3 v, t_vec3 n);

#endif
