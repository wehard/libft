/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:12:54 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 13:43:36 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "libft.h"

char			*ft_ht_get(t_ht *ht, const void *key)
{
	size_t	pos;
	t_ht_e	*cur;

	pos = (*ht->hash_func)(ht, key); //ft_ht_hash_str(ht, key);
	cur = ht->entries[pos];
	if (!cur)
		return (NULL);
	while (cur)
	{
		if (ft_memcmp(cur->key, key, ht->key_size) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
