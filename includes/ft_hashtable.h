/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtable.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:28:44 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 12:51:59 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHTABLE_H
# define FT_HASHTABLE_H

# include <stdlib.h>

typedef size_t (*t_hash_func)(const void *ht, const void *ptr);

typedef struct		s_ht_e
{
	char			*key;
	char			*value;
	struct s_ht_e	*next;
}					t_ht_e;

typedef struct		s_ht
{
	t_ht_e			**entries;
	size_t			size;
	t_hash_func		hash_func;
}					t_ht;


t_ht				*ft_ht_create(size_t size, t_hash_func hash_func);
void				ft_ht_set(t_ht *ht, const char *key, const char *value);
char				*ft_ht_get(t_ht *ht, const char *key);
void				ft_ht_del(t_ht *ht, const char *key);
void				ft_ht_print(t_ht *ht);

size_t				ft_ht_hash_str(const void *htptr, const void *keyptr);

#endif
