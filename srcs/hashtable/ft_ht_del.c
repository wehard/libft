/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_del.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:14:03 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:29:50 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "libft.h"

void			ht_del(t_ht *ht, const char *key)
{
	int		i;
	size_t	pos;
	t_ht_e	*cur;
	t_ht_e	*prev;

	pos = ft_ht_hash_str(ht, key);
	cur = ht->entries[pos];
	if (!cur)
		return ;
	i = 0;
	while (cur)
	{
		if (ft_strcmp(cur->key, key) == 0)
		{
			if (i == 0 && !cur->next)
				ht->entries[pos] = NULL;
			if (i == 0 && cur->next)
				ht->entries[pos] = cur->next;
			if (i != 0 && !cur->next)
				prev->next = NULL;
			if (i != 0 && cur->next)
				prev->next = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
		prev = cur;
		cur = prev->next;
		i++;
	}
}
