/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_hash_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:17:26 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:18:16 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"

size_t	ft_ht_hash_str(t_ht *ht, const char *key)
{
	size_t	value;
	int		i;
	int		key_len;

	key_len = ft_strlen(key);
	value = 0;
	i = 0;
	while (i < key_len)
		value = value * 37 + key[i++];
	value = value % ht->size;
	return (value);
}
