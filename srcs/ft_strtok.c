/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 12:11:17 by wkorande          #+#    #+#             */
/*   Updated: 2019/11/24 12:13:00 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_delim(char c, const char *delims)
{
	int i;

	i = 0;
	while (delims[i] != '\0')
	{
		if (delims[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtok(char *src, const char *delims)
{
	static char *ptr;
	char *token = NULL;

	if (src)
	{
		while (is_delim(*src, delims))
			src++;
		ptr = src;
	}
	if (!ptr)
		return (NULL);
	token = ptr;
	while (*ptr != '\0')
	{
		if (is_delim(*ptr, delims))
		{
			*ptr++ = '\0';
			while (is_delim(*ptr, delims))
				ptr++;
			break;
		}
		ptr++;
	}
	while (is_delim(*ptr, delims))
		ptr++;
	if (*(ptr) == '\0')
		ptr = NULL;
	return (token);
}
