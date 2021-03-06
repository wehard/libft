/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul_rgba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaakonm <rjaakonm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:08:58 by wkorande          #+#    #+#             */
/*   Updated: 2020/07/22 16:23:59 by rjaakonm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgba	ft_mul_rgba(t_rgba c, double t)
{
	c.r *= t;
	c.g *= t;
	c.b *= t;
	c = ft_clamp_rgba(c);
	return (c);
}
