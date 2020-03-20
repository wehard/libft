/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 14:11:58 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 14:12:21 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

t_queue *ft_queue_create(size_t size, size_t item_size)
{
	t_queue *q;

	if (!(q = malloc(sizeof(t_queue))))
		return (NULL);
	if (!(q->items = malloc(item_size * size)))
		return (NULL);
	q->size = size;
	q->item_size = item_size;
	q->front = -1;
	q->rear = -1;
	return (q);
}
