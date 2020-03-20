/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtable.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:28:44 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 11:29:28 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHTABLE_H
# define FT_HASHTABLE_H

# include <stdlib.h>

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
}					t_ht;

t_ht				*ft_ht_create(size_t size);
void				ft_ht_set(t_ht *ht, const char *key, const char *value);
char				*ft_ht_get(t_ht *ht, const char *key);
void				ft_ht_del(t_ht *ht, const char *key);
void				ft_ht_print(t_ht *ht);

size_t				ft_ht_hash_str(t_ht *ht, const char *key);

#endif
