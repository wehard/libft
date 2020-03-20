/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:12:54 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:13:20 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"

char			*ht_get(t_ht *ht, const char *key)
{
	size_t	pos;
	t_ht_e	*cur;

	pos = ht_hash(ht, key);
	cur = ht->entries[pos];
	if (!cur)
		return (NULL);
	while (cur)
	{
		if (ft_strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
