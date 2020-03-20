/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:15:21 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:15:53 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "ft_printf.h"

void print_ht(t_ht *ht)
{
	unsigned int i;

	i = 0;
	while (i < ht->size)
	{
		t_ht_e *entry = ht->entries[i];
		if (entry == NULL) {
			i++;
			continue;
		}
		ft_printf("[%3d]: ", i);
		while(1)
		{
			ft_printf("%s:%s ", entry->key, entry->value);
			if (entry->next == NULL) {
				break;
			}
			entry = entry->next;
		}
		ft_printf("\n");
		i++;
	}
}
