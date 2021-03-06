/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refract_vec3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:49:30 by wkorande          #+#    #+#             */
/*   Updated: 2020/11/15 11:49:48 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"
#include "libft.h"
#include <math.h>

t_vec3	ft_refract_vec3(t_vec3 i, t_vec3 normal, float ior)
{
	float cosi;
	float etai;
	float etat;
	float eta;
	float k;

	cosi = ft_clamp_d(ft_dot_vec3(i, normal), -1, 1);
	etai = 1;
	etat = ior;
	if (cosi < 0)
		cosi = -cosi;
	else
	{
		ft_swap_f(&etai, &etat);
		normal = ft_invert_vec3(normal);
	}
	eta = etai / etat;
	k = 1 - eta * eta * (1 - cosi * cosi);
	return (k < 0 ? ft_make_vec3(0, 0, 0) : ft_add_vec3(ft_mul_vec3(i, eta),
		ft_mul_vec3(normal, (eta * cosi - sqrtf(k)))));
}
