/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:04:49 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:10:26 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include <stdlib.h>

t_ht	*ft_ht_create(size_t size)
{
	t_ht	*ht;
	size_t	i;

	if (!(ht = (t_ht*)malloc(sizeof(t_ht))))
		return (NULL);
	ht->size = size;
	if (!(ht->entries = (t_ht_e**)malloc(sizeof(t_ht_e*) * size)))
		return (NULL);
	i = 0;
	while (i < ht->size)
	{
		ht->entries[i] = NULL;
		i++;
	}
	return (ht);
}
