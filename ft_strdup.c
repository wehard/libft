/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:27:01 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/15 14:40:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char*)malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	if (dup == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*dup = *s1;
		s1++;
		dup++;
	}
	dup = '\0';
	return (dup);
}
