/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 20:06:02 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/23 20:33:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "ft_printf.h"

void	*ft_stack_pop(t_stack *s)
{
	void *p;

	if (s->ptr == 0)
	{
		ft_printf("ft_stack_pop: stack empty!\n");
		return (NULL);
	}
	s->ptr -= s->item_size;
	p = s->items + s->ptr;
	return (p);
}
