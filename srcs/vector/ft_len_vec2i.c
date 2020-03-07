/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_vec2i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:24:56 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/07 14:26:46 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

int	ft_len_vec2i(t_vec2i v)
{
	double l;

	if (v.x == 0 && v.y == 0)
		return (0);
	l = sqrt((v.x * v.x) + (v.y * v.y));
	return (l);
}
