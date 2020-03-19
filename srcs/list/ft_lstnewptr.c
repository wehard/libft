/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 10:04:25 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/19 10:10:50 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnewptr(const void *ptr)
{
	t_list *list;

	if (!(list = (t_list*)malloc(sizeof(*list))))
		return (NULL);
	list->content = (void*)ptr;
	list->content_size = sizeof(ptr);
	list->next = NULL;
	return (list);
}
