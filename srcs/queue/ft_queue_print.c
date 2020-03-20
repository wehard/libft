/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 16:15:48 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 14:07:52 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"
#include "ft_printf.h"

void ft_queue_print(t_queue *q)
{
	int i;

	i = q->front;
	if (ft_queue_isempty(q))
		ft_printf("queue is empty\n");
	else
	{
		ft_printf("queue (size: %d item_size: %d)\n", q->size, q->item_size);
		while (i <= q->rear)
		{
			ft_printf("%p ", &q->items[i]);
			i++;
		}
		ft_printf("\n");
	}
}
