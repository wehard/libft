/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:10:47 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:12:35 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include <stdlib.h>

static t_ht_e	*ft_ht_make_entry(const char *key, const char *value)
{
	t_ht_e	*entry;

	if (!(entry = (t_ht_e*)malloc(sizeof(t_ht_e))))
		return (NULL);
	if (!(entry->key = (char*)malloc(sizeof(char) * ft_strlen(key) + 1)))
		return (NULL);
	if (!(entry->value = (char*)malloc(sizeof(char) * ft_strlen(value) + 1)))
		return (NULL);
	ft_strcpy(entry->key, key);
	ft_strcpy(entry->value, value);
	entry->next = NULL;
	return (entry);
}

void			ft_ht_set(t_ht *ht, const char *key, const char *value)
{
	unsigned int	pos;
	t_ht_e		*cur;
	t_ht_e		*prev;

	pos = ht_hash(ht, key);
	cur = ht->entries[pos];
	if (cur == NULL)
	{
		ht->entries[pos] = ft_ht_make_entry(key, value);
		return ;
	}
	while (cur)
	{
		if (ft_strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			if (!(cur->value = (char*)malloc(sizeof(char) * ft_strlen(value) + 1)))
				return ;
			ft_strcpy(cur->value, value);
			return ;
		}
		prev = cur;
		cur = prev->next;
	}
	prev->next = ht_make_pair(key, value);
}
